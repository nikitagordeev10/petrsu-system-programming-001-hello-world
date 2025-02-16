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
#define STR_SIZE 1024
#define SYM_SIZE 1

int main(int argc, char **argv)
{
    /* Проверяем на наличие аргументов */
    if(argc != 3){
        fprintf(stderr, "Введите 3 аргумента\n");
        exit(EXIT_FAILURE);
    }
    
    /* Открываем файл */
    int file;
    if(-1 == (file = open(argv[1], O_APPEND | O_RDWR))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    
    int pos;

    /* Перемещаем указатель */    
    if(-1 == (pos = lseek(file, 0, SEEK_SET))){
        perror("Не удалось установить указатель в файле");
        exit(EXIT_FAILURE);
    }
    
    /* Читаем из файла */
    int text;
    char str_buf[STR_SIZE];
    if(-1 == (text = read(file, str_buf, sizeof(str_buf)))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    str_buf[text] = '\0';
    fprintf(stdout, "Содержимое входного файла файл:\n%s\n", str_buf);

    /* Позиция введённая пользователем */
    long search = atoi(argv[2]);

    /* Перемещаем указатель позицию введённую пользователем */    
    if(-1 == (pos = lseek(file, (long) search * SYM_SIZE, 0))){
        perror("Не удалось установить указатель в файле");
        exit(EXIT_FAILURE);
    }
    
    /* Читаем из файла */
    char sym_buf[SYM_SIZE];
    if(-1 == (text = read(file, sym_buf, SYM_SIZE))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    sym_buf[text] = '\0';
    fprintf(stdout, "Символ из выбранного места:\n\"%s\"\n", sym_buf);

    /* Записываем в файл */
    char data[] = " data";
    int line = sizeof(data);
    if(-1 == (pos = lseek(file, 0, SEEK_SET))){
        perror("Не удалось установить указатель в файле");
        exit(EXIT_FAILURE);
    }

    /* Проверка записи в файл */
    if(-1 == (text = write(file, data, line - 1))){
        perror("Ошибка write");
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "Записано в файл:\n%s\n", data);

    /* Закрываем файл */
    if(-1 == (close(file))){
        perror(argv[1]);
        exit(EXIT_FAILURE);
    }
    
    exit(0);
}
