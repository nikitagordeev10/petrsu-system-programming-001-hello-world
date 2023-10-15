/**
 * task_5.c — программа, с помощью которой можно заметить особенность работы функции read(): 
 * При чтении из терминала (возврат из read() происходит при нажатии enter).
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 1024

int main(int argc, char **argv)
{
    char buf[BUFSIZE];
    int termin;

    /* Читаем из терминала и проверяем возвращ знач */
    if(-1 == (termin = read(1, buf, sizeof(buf)))){
        perror("Ошибка read\n");
        exit(EXIT_FAILURE);
    }
    
    /* Выводим то, что прочитали */
    buf[termin] = '\0';
    printf("Ваш ввод:\n%s", buf);
    
    exit(0);
}
