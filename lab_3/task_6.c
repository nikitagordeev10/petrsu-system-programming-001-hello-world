/**
 * task_6.c — программа, с помощью которой можно проверить: 
 * Действительно ли при создании дубликата файлового дескриптора функцией dup() 
 * дубликат и исходный файловый дескриптор разделяют общий указатель текущей позиции в файле.
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    /* Проверяем количество аргументов */
    if(argc != 2){
        fprintf(stderr, "Введите 2 аргумента\n");
        exit(EXIT_FAILURE);
    }

    int file_orig, file_dup;

    /* Открываем и проверяем файловый дескриптор оригинала */
    if(-1 == (file_orig = open(argv[1], O_RDWR))) {
        perror("Не удалось открыть файл\n");
        exit(EXIT_FAILURE);
    }

    /* Создаем дубликат файлового дескриптора */
    file_dup = dup(file_orig);
    
    if(-1 == file_dup) {
        perror("Ошибка дублирования\n");
        exit(EXIT_FAILURE);
    }

    int cur_pos_orig, cur_pos_dup;

    /* Cмещение от начала файла на 14 */
    cur_pos_orig = lseek(file_orig, 14, SEEK_SET); 
    
    if(-1 == cur_pos_orig) {
        perror("Ошибка lseek()\n");
        exit(EXIT_FAILURE);
    }

    /* Смещение от текущей позиции */
    cur_pos_dup = lseek(file_dup, 0, SEEK_CUR); 
    
    if(-1 == cur_pos_dup) {
        perror("Ошибка lseek()\n");
        exit(EXIT_FAILURE);
    }

    printf("Текущая позиция в 1 файле: %d\n", cur_pos_orig);
    printf("Текущая позиция в 2 файле: %d\n", cur_pos_dup);

    if (cur_pos_orig == cur_pos_dup)
        printf ("Разделяют общий указатель в файле\n");
    else
        printf ("Не разделяют общий указатель в файле\n");

    if (-1 == close(file_orig)) {
        perror("Ошибка закрытия файла\n");
        exit(EXIT_FAILURE);
    }
    if (-1 == close(file_dup)) {
        perror("Ошибка закрытия файла\n");
        exit(EXIT_FAILURE);
    }
                                      
    exit(0);
}
