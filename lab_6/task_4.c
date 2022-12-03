/*
 * task_4.c — программа аналог функции execlp() (запуск файла на исполнение) 
 * без использования других функций exec*p().
 * 
 * Copyright (c) <2022> <Гордеев Никита>
 * 
 * This code is licensed under a MIT-style license.
 */

#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include "apue.h"
#include <linux/limits.h>

int main(int argc, char **argv)
{
    /* Инициализация аргументов */
    char* path; //
    char input_files[PATH_MAX]; //
    pid_t pid; //
    
    int status;
    int _k1 = 0;
    int _k2 = 0;
    int amount = 0; //Для подсчета

    /* Проверка на наличие аргументов */
    if (argc != 2) {
	    fprintf (stderr, "Использование: ./task_4 test\n");
        exit(EXIT_FAILURE);
    }

    /* Проверка существования новой программы */
    if (strchr(argv[1], '/') != 0) {
        if (execl(argv[1], argv[1], NULL) == -1) {
            fprintf (stderr, "Ошибка запуска новой программы exec\n");
	        exit(EXIT_FAILURE);
        };
        return 0;
    }

    path = getenv("PATH");
    _k1 = strlen(path);
    pid = fork();
    
    /* Выводит ошибку, если ошибка при оперед патча */
    if (path == NULL) {
        printf("getenv() error\n");
        fprintf (stderr, "Ошибка получения переменной окружения getenv\n");
	    exit(EXIT_FAILURE);
        exit(EXIT_FAILURE);
    }

    /* Выводит ошибку, если ошибка при создании процесса */
    if ((pid) < 0) {
        fprintf (stderr, "Ошибка создания нового процесса fork\n");
	    exit(EXIT_FAILURE);
    }
    /* Иначе делаем: */
    else if(pid == 0) {
        while (1) {
            while (path[amount + _k2] != ':' ||'\0') {
                input_files[amount] = path[amount + _k2];
                amount++;
            }

            _k2 = amount + _k2 + 1;
            input_files[_k2] = path[amount];
            input_files[amount] = '/';
            input_files[amount + 1] = 0;
            strcat(input_files, argv[1]);
            amount = 0; // обнуляем количество

            if (execl(input_files, input_files, NULL) != -1) {
                break;
            }
            /* Если не знаем такую команду выводим и выходим */
            if (_k2 > _k1) {
                printf("I unknown this command\n");
                break;
            }
        }
    }
    else {
        /* Выводит ошибку, если ошибка в waidpid */
        if ((waitpid(pid, &status, 0)) == -1) {
            printf("Waitpid() error\n");
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}

/*
 * Материалы:
 * Идея аналога exec // cyberforum URL: https://www.cyberforum.ru/cpp-beginners/thread2867939.html (дата обращения: 20.11.2022).
 * Аналог явовского exec()-а в С ? // ixbt конференция URL: https://forum.ixbt.com/topic.cgi?id=26:8929 (дата обращения: 21.11.2022).
 * Листинг 8.8. Пример использования функций exec // UNIX. Профессиональное программирование. 3-е изд. URL: https://www.rulit.me/data/programs/resources/pdf/UNIX-Professionalnoe-programmirovanie_RuLit_Me_609965.pdf (дата обращения: 21.11.2022).
 * 8.13. Функция system // UNIX. Профессиональное программирование. URL: https://www.rulit.me/data/programs/resources/pdf/UNIX-Professionalnoe-programmirovanie_RuLit_Me_609965.pdf (дата обращения: 20.11.2022).
 * Листинг 8.13. Вызов функции system // UNIX. Профессиональное программирование. URL: https://www.rulit.me/data/programs/resources/pdf/UNIX-Professionalnoe-programmirovanie_RuLit_Me_609965.pdf (дата обращения: 20.11.2022).
 * execl, execle, execlp, execlpe, execv, execve, execvp, execvpe // Программирование на C и C++ URL: http://www.c-cpp.ru/content/execl-execle-execlp-execlpe-execv-execve-execvp-execvpe (дата обращения: 20.11.2022).
 * Unix2017b/Техника fork — exec // iRunner Wiki URL: https://acm.bsu.by/wiki/Unix2017b/Техника_fork_—_exec (дата обращения: 21.11.2022).
 * Функция strchr // CppStudio URL: http://cppstudio.com/post/726/ (дата обращения: 21.11.2022).
 * Функция strlen // CppStudio URL: http://cppstudio.com/post/664/ (дата обращения: 21.11.2022).
 * Функция getenv // CppStudio URL: http://cppstudio.com/post/879/ (дата обращения: 21.11.2022).
 */
