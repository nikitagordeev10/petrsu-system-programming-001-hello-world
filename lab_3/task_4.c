/**
 * task_4.c — программа, позволяющая выяснить: 
 * 1) Если файл открыт для чтения и записи с флагом O_APPEND, можно ли читать данные из произвольного места в файле с помощью функций lseek() и read()
 * 2) Можно ли записывать данные в произвольное место в файле с помощью функций lseek() и write() ? 
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
#define BUF_SIZE 1024

int main(int argc, char **argv)
{
    /* Проверяем на наличие аргументов */
    if(argc != 2){
        fprintf(stderr, "Недостаточно аргументов\n");
        exit(EXIT_FAILURE);
    }

    /* Открываем файл для чтения и записи с флагом O_APPEND */
    int file;
    if(-1 == (file = open(argv[1], O_APPEND | O_RDWR))){
        perror("Не открыть файл");
        exit(EXIT_FAILURE);
    }

    /* Указатель, для чтения из произвольного места */
    int poz;
    if(-1 == (poz = lseek(file, 0, SEEK_SET))){
        perror("Не удалось установить указатель в файле");
        exit(EXIT_FAILURE);
    }

    /* Читаем из файла с помощью функции read()*/
    int text;
    char buf[BUF_SIZE];
    if(-1 == (text = read(file, buf, sizeof(buf)))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "Содержимое входного файла:\n%s\n", buf);

    /* Записываем в произвольное место с помощью функции lseek() */
    char message[] = "MESSAGE ";
    int line = sizeof(message);
    if(-1 == (poz = lseek(file, 0, SEEK_SET))){
        perror("Не удалось установить указатель в файле");
        exit(EXIT_FAILURE);
    }
    if(-1 == (text = write(file, message, line - 1))){
        perror("ошибка write");
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "Записано в файл:\n%s\n", message);

    /* Закрываем файл */
    if(-1 == (close(file))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    exit(0);
}
