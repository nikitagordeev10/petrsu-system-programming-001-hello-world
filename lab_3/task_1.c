/**
 * task_1.c — программа копирования файлов. Должна получать два аргумента командной строки, 
 * Первый аргумент - файл, откуда копировать, 
 * Второй аргумент - файл, куда копировать.
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <fcntl.h>
#include <unistd.h>             
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int main(int argc, char **argv)
{

    /* Проверка на наличие аргументов */
    if (argc < 3) {
        fprintf(stderr, "Введите 3 аргумента\n");
        exit(EXIT_FAILURE);
    }

    /* Открываем файлы, проверяя на корректное открытие */
    int input, output;
    if (-1 == (input = open(argv[1], O_RDONLY))) {
        perror("Первый файл недоступен\n");
        exit(EXIT_FAILURE);
    }
    if (-1 == (output = open(argv[2], O_WRONLY))) {
        perror("Второй файл недоступен\n");
        exit(EXIT_FAILURE);
    }

    /* Посимвольно переписываем первый файл во второй */
    char buf[BUF_SIZE];
    int text;
    while (0 != (text = read(input, buf, BUF_SIZE))) {
        if (text == -1) {
            perror("Ошибка read\n");
            exit(EXIT_FAILURE);
        }

        if (text != write(output, buf, text)) {
            perror("Ошибка write\n");
            exit(EXIT_FAILURE);
        }
    }

    /* Закрываем файлы */
    if (-1 == (close(input))) {
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    if (-1 == (close(output))) {
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }

    exit(0);
}
