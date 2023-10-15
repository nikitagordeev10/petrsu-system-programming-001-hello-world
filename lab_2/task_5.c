/*
 * task_5.c - вывод конфигурационных пределов, получаемых с помощью sysconf()
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

static void pr_sysconf(char *, int);


int main(int argc, char *argv[])
{
    /* Таблица 2.11. Пределы и идентификаторы для аргумента name функций sysconf */
    printf
        ("\nТаблица 2.11. Пределы и идентификаторы для аргумента name функций sysconf\n");
#ifdef _SC_ARG_MAX
    pr_sysconf("ARG_MAX = ", _SC_ARG_MAX);
#else
    printf("идентификатор ARG_MAX не найден\n");
#endif

#ifdef _SC_ATEXIT_MAX
    pr_sysconf("ATEXIT_MAX = ", _SC_ATEXIT_MAX);
#else
    printf("идентификатор ATEXIT_MAX не найден\n");
#endif

#ifdef _SC_CHILD_MAX
    pr_sysconf("CHILD_MAX = ", _SC_CHILD_MAX);
#else
    printf("идентификатор CHILD_MAX не найден\n");
#endif

#ifdef _SC_CLK_TCK
    pr_sysconf
        ("Количество тактов системных часов в секунду = ",
         _SC_CLK_TCK);
#else
    printf
        ("идентификатор Количество тактов системных часов в секунду не найден\n");
#endif

#ifdef _SC_COLL_WEIGHTS_MAX
    pr_sysconf("COLL_WEIGHTS_MAX = ", _SC_COLL_WEIGHTS_MAX);
#else
    printf
        ("идентификатор COLL_WEIGHTS_MAX не найден\n");
#endif

#ifdef _SC_DELAYTIMER_MAX
    pr_sysconf("DELAYTIMER_MAX = ", _SC_DELAYTIMER_MAX);
#else
    printf
        ("идентификатор DELAYTIMER_MAX не найден\n");
#endif

#ifdef _SC_HOST_NAME_MAX
    pr_sysconf("HOST_NAME_MAX = ", _SC_HOST_NAME_MAX);
#else
    printf("идентификатор HOST_NAME_MAX не найден\n");
#endif

#ifdef _SC_IOV_MAX
    pr_sysconf("IOV_MAX = ", _SC_IOV_MAX);
#else
    printf("идентификатор IOV_MAX не найден\n");
#endif

#ifdef _SC_LINE_MAX
    pr_sysconf("LINE_MAX = ", _SC_LINE_MAX);
#else
    printf("идентификатор LINE_MAX не найден\n");
#endif

#ifdef _SC_LOGIN_NAME_MAX
    pr_sysconf("LOGIN_NAME_MAX = ", _SC_LOGIN_NAME_MAX);
#else
    printf
        ("идентификатор LOGIN_NAME_MAX не найден\n");
#endif

#ifdef _SC_NGROUPS_MAX
    pr_sysconf("NGROUPS_MAX = ", _SC_NGROUPS_MAX);
#else
    printf("идентификатор NGROUPS_MAX не найден\n");
#endif

#ifdef _SC_OPEN_MAX
    pr_sysconf("OPEN_MAX = ", _SC_OPEN_MAX);
#else
    printf("идентификатор OPEN_MAX не найден\n");
#endif

#ifdef _SC_PAGESIZE
    pr_sysconf("PAGESIZE = ", _SC_PAGESIZE);
#else
    printf("идентификатор PAGESIZE не найден\n");
#endif

#ifdef _SC_PAGE_SIZE
    pr_sysconf("PAGE_SIZE = ", _SC_PAGE_SIZE);
#else
    printf("идентификатор PAGE_SIZE не найден\n");
#endif

#ifdef _SC_RE_DUP_MAX
    pr_sysconf("RE_DUP_MAX = ", _SC_RE_DUP_MAX);
#else
    printf("идентификатор RE_DUP_MAX не найден\n");
#endif

#ifdef _SC_RTSIG_MAX
    pr_sysconf("RTSIG_MAX = ", _SC_RTSIG_MAX);
#else
    printf("идентификатор RTSIG_MAX не найден\n");
#endif

#ifdef _SC_SEM_NSEMS_MAX
    pr_sysconf("SEM_NSEMS_MAX = ", _SC_SEM_NSEMS_MAX);
#else
    printf("идентификатор SEM_NSEMS_MAX не найден\n");
#endif

#ifdef _SC_SEM_VALUE_MAX
    pr_sysconf("SEM_VALUE_MAX = ", _SC_SEM_VALUE_MAX);
#else
    printf("идентификатор SEM_VALUE_MAX не найден\n");
#endif

#ifdef _SC_SIGQUEUE_MAX
    pr_sysconf("SIGQUEUE_MAX = ", _SC_SIGQUEUE_MAX);
#else
    printf("идентификатор SIGQUEUE_MAX не найден\n");
#endif

#ifdef _SC_STREAM_MAX
    pr_sysconf("STREAM_MAX = ", _SC_STREAM_MAX);
#else
    printf("идентификатор STREAM_MAX не найден\n");
#endif

#ifdef _SC_SYMLOOP_MAX
    pr_sysconf("SYMLOOP_MAX = ", _SC_SYMLOOP_MAX);
#else
    printf("идентификатор SYMLOOP_MAX не найден\n");
#endif

#ifdef _SC_TIMER_MAX
    pr_sysconf("TIMER_MAX = ", _SC_TIMER_MAX);
#else
    printf("идентификатор TIMER_MAX не найден\n");
#endif

#ifdef _SC_TTY_NAME_MAX
    pr_sysconf("TTY_NAME_MAX = ", _SC_TTY_NAME_MAX);
#else
    printf("идентификатор TTY_NAME_MAX не найден\n");
#endif

#ifdef _SC_TZNAME_MAX
    pr_sysconf("TZNAME_MAX = ", _SC_TZNAME_MAX);
#else
    printf("идентификатор TZNAME_MAX не найден\n");
#endif

    return 0;
}

static void pr_sysconf(char *mesg, int name)
{
    long val;
    fputs(mesg, stdout);
    errno = 0;

    if ((val = sysconf(name)) < 0) {
        if (errno != 0) {
            if (errno == EINVAL)
                fputs(" (не поддерживается)\n", stdout);
            else {
                perror("ошибка вызова sysconf");
                exit(EXIT_FAILURE);
            }
        } else {
            fputs(" (нет ограничений)\n", stdout);
        }
    } else {
        printf(" %ld\n", val);
    }
}
