/**
 * task1_2.c --  вывод на консоль количества аргументов командной строки и всех аргументов командной строки
 * Copyright (c) <2022> <Гордеев Никита>
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>

int main (int argc, char * argv[])
{
    /* Вывод кол-ва аргументов командной строки */
    printf("There are %d arguments:\n", argc);

    // Перебираем все аргументы и
    // выводим номер и значение каждого из них
    for (int i = 0 ; i < argc; i++) {
	    printf("%d: %s\n", i+1, argv[i]); 
    }

    return 0;
}