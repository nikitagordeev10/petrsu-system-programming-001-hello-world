/**
 * task_3.c — программа, позволяющую выяснить: 
 * 1) Поведение функции open() при открытии с флагами O_CREAT | O_EXCL для записи файла, который существует и для которого нет прав на запись. 
 * 2) Какую ошибку вернет функция open() - "нет прав" или "файл существует" ?
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
#include <sys/stat.h>

int main(int argc, char **argv)
{
    /* Проверка на наличие аргументов */
    if (argc != 2) {
        fprintf(stderr, "Введите имя файла");
        exit(EXIT_FAILURE);
    }

    /* Открываем и проверяем работу функции open */
    int file;
    if (-1 == (file = open(argv[1], O_CREAT | O_EXCL, S_IRUSR))) {
        perror("Файл недоступен");
        exit(EXIT_FAILURE);
    }

    /* Закрываем файл */
    if (-1 == (close(file))) {
        perror("Файл недоступен");
        exit(EXIT_FAILURE);
    }

    exit(0);
}
