/**
 * task_2.c — программа добавления строки в конец произвольного файла. Должна получать два аргумента командной строки: 
 * Первый аргумент - файл, в который добавить строку, 
 * Второй аргумент - строка для добавления.
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <fcntl.h>
#include <unistd.h>             
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    /* Проверка на наличие аргументов */
    if (argc < 3) {
        fprintf(stderr, "Введите 3 аргумента\n");
        exit(EXIT_FAILURE);
    }

    /* Открываем файл */
    int file;
    if (-1 == (file = open(argv[1], O_APPEND | O_WRONLY))) {
        perror("Файл недоступен\n");
        exit(EXIT_FAILURE);
    }
    
    /* Записываем строку */
    int line = strlen(argv[2]);

    if(line != write(file, argv[2], line)) {
        fprintf(stderr, "Ошибка write\n");
        exit(EXIT_FAILURE);
    }

    /* Закрываем файл */
    if (-1 == (close(file))) {
        perror("Файл недоступен\n");
        exit(EXIT_FAILURE);
    }
    
    exit(0);
}
