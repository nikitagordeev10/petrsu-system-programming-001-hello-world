/* 
 * task_4.c - вывод значения конфигурационных пределов, получаемых с помощью pathconf(), для корневой файловой системы
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>


static void pr_pathconf(char *, int);

int main(int argc, char *argv[])
{
    /* Таблица 2.12. Пределы и идентификаторы для аргумента name функций pathconf и fpathconf */
    printf
        ("\nТаблица 2.12. Пределы и идентификаторы для аргумента name функций pathconf и fpathconf\n");
#ifdef _PC_FILESIZEBITS
    pr_pathconf("FILESIZEBITS = ", _PC_FILESIZEBITS);
#else
    printf
        ("идентификатор _PC_FILESIZEBITS не найден\n");
#endif

#ifdef _PC_LINK_MAX
    pr_pathconf("LINK_MAX = ", _PC_FILESIZEBITS);
#else
    printf("идентификатор _PC_LINK_MAX не найден\n");
#endif

#ifdef _PC_MAX_CANON
    pr_pathconf("MAX_CANON = ", _PC_MAX_CANON);
#else
    printf("идентификатор MAX_CANON не найден\n");
#endif

#ifdef _PC_MAX_INPUT
    pr_pathconf("MAX_INPUT = ", _PC_MAX_INPUT);
#else
    printf("идентификатор MAX_INPUT не найден\n");
#endif

#ifdef _PC_NAME_MAX
    pr_pathconf("NAME_MAX = ", _PC_NAME_MAX);
#else
    printf("идентификатор NAME_MAX не найден\n");
#endif

#ifdef _PC_PATH_MAX
    pr_pathconf("PATH_MAX = ", _PC_PATH_MAX);
#else
    printf("идентификатор PATH_MAX не найден\n");
#endif

#ifdef _PC_PIPE_BUF
    pr_pathconf("PIPE_BUF = ", _PC_PIPE_BUF);
#else
    printf("идентификатор PIPE_BUF не найден\n");
#endif

#ifdef _PC_TIMESTAMP_RESOLUTION
    pr_pathconf("_POSIX_TIMESTAMP_RESOLUTION = ",
                _PC_TIMESTAMP_RESOLUTION);
#else
    printf
        ("идентификатор _POSIX_TIMESTAMP_RESOLUTION не найден\n");
#endif

#ifdef _PC_SYMLINK_MAX
    pr_pathconf("SYMLINK_MAX = ", _PC_SYMLINK_MAX);
#else
    printf("идентификатор SYMLINK_MAX не найден\n");
#endif

    return 0;
}

static void pr_pathconf(char *mesg, int name)
{
    long val;

    fputs(mesg, stdout);
    errno = 0;

    if ((val = pathconf("/", name)) < 0) {
        if (errno != 0) {
            if (errno == EINVAL)
                fputs(" (не поддерживается)\n", stdout);
            else
                perror("ошибка вызова pathconf, path = /");
            exit(EXIT_FAILURE);
        } else {
            fputs(" (нет ограничений)\n", stdout);
        }
    } else {
        printf(" %ld\n", val);
    }
}
