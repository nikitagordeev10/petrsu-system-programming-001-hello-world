/*
 * task_2.c - вывод значения всех пределов POSIX в системе
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    /* Таблица 2.8. Минимальные значения из файла <limits.h>, определяемые стандартом POSIX.1 */
    printf
        ("\nТаблица 2.8. Минимальные значения из файла <limits.h>, определяемые стандартом POSIX.1\n");
#if defined(_POSIX_ARG_MAX)
    printf("_POSIX_ARG_MAX = %d\n", _POSIX_ARG_MAX);
#else
    printf
        ("идентификатор _POSIX_ARG_MAX не найден\n");
#endif

#if defined(_POSIX_CHILD_MAX)
    printf("_POSIX_CHILD_MAX = %d\n", _POSIX_CHILD_MAX);
#else
    printf
        ("идентификатор _POSIX_CHILD_MAX не найден\n");
#endif

#if defined(_POSIX_DELAYTIMER_MAX)
    printf("_POSIX_DELAYTIMER_MAX = %d\n", _POSIX_DELAYTIMER_MAX);
#else
    printf
        ("идентификатор _POSIX_DELAYTIMER_MAX не найден\n");
#endif

#if defined(_POSIX_HOST_NAME_MAX)
    printf("_POSIX_HOST_NAME_MAX = %d\n", _POSIX_HOST_NAME_MAX);
#else
    printf
        ("идентификатор _POSIX_HOST_NAME_MAX не найден\n");
#endif

#if defined(_POSIX_LINK_MAX)
    printf("_POSIX_LINK_MAX = %d\n", _POSIX_LINK_MAX);
#else
    printf
        ("идентификатор _POSIX_LINK_MAX не найден\n");
#endif

#if defined(_POSIX_LOGIN_NAME_MAX)
    printf("_POSIX_LOGIN_NAME_MAX = %d\n", _POSIX_LOGIN_NAME_MAX);
#else
    printf
        ("идентификатор _POSIX_LOGIN_NAME_MAX не найден\n");
#endif

#if defined(_POSIX_MAX_CANON)
    printf("_POSIX_MAX_CANON = %d\n", _POSIX_MAX_CANON);
#else
    printf
        ("идентификатор _POSIX_MAX_CANON не найден\n");
#endif

#if defined(_POSIX_MAX_INPUT)
    printf("_POSIX_MAX_INPUT = %d\n", _POSIX_MAX_INPUT);
#else
    printf
        ("идентификатор _POSIX_MAX_INPUT не найден\n");
#endif

#if defined(_POSIX_NAME_MAX)
    printf("_POSIX_NAME_MAX = %d\n", _POSIX_NAME_MAX);
#else
    printf
        ("идентификатор _POSIX_NAME_MAX не найден\n");
#endif

#if defined(_POSIX_NGROUPS_MAX)
    printf("_POSIX_NGROUPS_MAX = %d\n", _POSIX_NGROUPS_MAX);
#else
    printf
        ("идентификатор _POSIX_NGROUPS_MAX не найден\n");
#endif

#if defined(_POSIX_OPEN_MAX)
    printf("_POSIX_OPEN_MAX = %d\n", _POSIX_OPEN_MAX);
#else
    printf
        ("идентификатор _POSIX_OPEN_MAX не найден\n");
#endif

#if defined(_POSIX_PATH_MAX)
    printf("_POSIX_PATH_MAX = %d\n", _POSIX_PATH_MAX);
#else
    printf("_POSIX_PATH_MAX не найден\n");
#endif

#if defined(_POSIX_PIPE_BUF)
    printf("_POSIX_PIPE_BUF = %d\n", _POSIX_PIPE_BUF);
#else
    printf
        ("идентификатор _POSIX_PIPE_BUF не найден\n");
#endif

#if defined(_POSIX_RE_DUP_MAX)
    printf("_POSIX_RE_DUP_MAX = %d\n", _POSIX_RE_DUP_MAX);
#else
    printf
        ("идентификатор _POSIX_RE_DUP_MAX не найден\n");
#endif

#if defined(_POSIX_RTSIG_MAX)
    printf("_POSIX_RTSIG_MAX = %d\n", _POSIX_RTSIG_MAX);
#else
    printf
        ("идентификатор _POSIX_RTSIG_MAX не найден\n");
#endif

#if defined(_POSIX_SEM_NSEMS_MAX)
    printf("_POSIX_SEM_NSEMS_MAX = %d\n", _POSIX_SEM_NSEMS_MAX);
#else
    printf
        ("идентификатор _POSIX_SEM_NSEMS_MAX не найден\n");
#endif

#if defined(_POSIX_SEM_VALUE_MAX)
    printf("_POSIX_SEM_VALUE_MAX = %d\n", _POSIX_SEM_VALUE_MAX);
#else
    printf
        ("идентификатор _POSIX_SEM_VALUE_MAX не найден\n");
#endif

#if defined(_POSIX_SIGQUEUE_MAX)
    printf("_POSIX_SIGQUEUE_MAX = %d\n", _POSIX_SIGQUEUE_MAX);
#else
    printf
        ("идентификатор _POSIX_SIGQUEUE_MAX не найден\n");
#endif

#if defined(_POSIX_SSIZE_MAX)
    printf("_POSIX_SSIZE_MAX = %d\n", _POSIX_SSIZE_MAX);
#else
    printf
        ("идентификатор _POSIX_SSIZE_MAX не найден\n");
#endif

#if defined(_POSIX_STREAM_MAX)
    printf("_POSIX_STREAM_MAX = %d\n", _POSIX_STREAM_MAX);
#else
    printf
        ("идентификатор _POSIX_STREAM_MAX не найден\n");
#endif

#if defined(_POSIX_SYMLINK_MAX)
    printf("_POSIX_SYMLINK_MAX = %d\n", _POSIX_SYMLINK_MAX);
#else
    printf
        ("идентификатор _POSIX_SYMLINK_MAX не найден\n");
#endif

#if defined(_POSIX_SYMLOOP_MAX)
    printf("_POSIX_SYMLOOP_MAX = %d\n", _POSIX_SYMLOOP_MAX);
#else
    printf
        ("идентификатор _POSIX_SYMLOOP_MAX не найден\n");
#endif

#if defined(_POSIX_TIMER_MAX)
    printf("_POSIX_TIMER_MAX = %d\n", _POSIX_TIMER_MAX);
#else
    printf
        ("идентификатор _POSIX_TIMER_MAX не найден\n");
#endif

#if defined(_POSIX_TTY_NAME_MAX)
    printf("_POSIX_TTY_NAME_MAX = %d\n", _POSIX_TTY_NAME_MAX);
#else
    printf
        ("идентификатор _POSIX_TTY_NAME_MAX не найден\n");
#endif

#if defined(_POSIX_TZNAME_MAX)
    printf("_POSIX_TZNAME_MAX = %d\n", _POSIX_TZNAME_MAX);
#else
    printf
        ("идентификатор _POSIX_TZNAME_MAX не найден\n");
#endif

/* Таблица 2.9. Значения времени выполнения из файла <limits.h>, определяемые стандартом POSIX.1 */
    printf
        ("\nТаблица 2.9. Значения времени выполнения из файла <limits.h>, определяемые стандартом POSIX.1\n");
#if defined(ARG_MAX)
    printf("ARG_MAX = %d\n", _POSIX_TZNAME_MAX);
#else
    printf("идентификатор ARG_MAX не найден\n");
#endif

#if defined(CHILD_MAX)
    printf("CHILD_MAX = %d\n", _POSIX_CHILD_MAX);
#else
    printf("идентификатор CHILD_MAX не найден\n");
#endif

#if defined(DELAYTIMER_MAX)
    printf("DELAYTIMER_MAX = %d\n", _POSIX_DELAYTIMER_MAX);
#else
    printf
        ("идентификатор DELAYTIMER_MAX не найден\n");
#endif

#if defined(HOST_NAME_MAX)
    printf("HOST_NAME_MAX = %d\n", _POSIX_HOST_NAME_MAX);
#else
    printf("идентификатор HOST_NAME_MAX не найден\n");
#endif

#if defined(LOGIN_NAME_MAX)
    printf("LOGIN_NAME_MAX = %d\n", _POSIX_LOGIN_NAME_MAX);
#else
    printf
        ("идентификатор LOGIN_NAME_MAX не найден\n");
#endif

#if defined(OPEN_MAX)
    printf("OPEN_MAX = %d\n", _POSIX_OPEN_MAX);
#else
    printf("идентификатор OPEN_MAX не найден\n");
#endif

#if defined(RTSIG_MAX)
    printf("RTSIG_MAX = %d\n", _POSIX_RTSIG_MAX);
#else
    printf("идентификатор RTSIG_MAX не найден\n");
#endif

#if defined(SEM_UNSEMS_MAX)
    printf("SEM_UNSEMS_MAX = %d\n", _POSIX_SEM_UNSEMS_MAX);
#else
    printf
        ("идентификатор SEM_UNSEMS_MAX не найден\n");
#endif

#if defined(SEM_VALUE_MAX)
    printf("SEM_VALUE_MAX = %d\n", _POSIX_SEM_VALUE_MAX);
#else
    printf("идентификатор SEM_VALUE_MAX не найден\n");
#endif

#if defined(SIGQUEUE_MAX)
    printf("SIGQUEUE_MAX = %d\n", _POSIX_SIGQUEUE_MAX);
#else
    printf("идентификатор SIGQUEUE_MAX не найден\n");
#endif

#if defined(STREAM_MAX)
    printf("STREAM_MAX = %d\n", _POSIX_STREAM_MAX);
#else
    printf("идентификатор STREAM_MAX не найден\n");
#endif

#if defined(SYMLOOP_MAX)
    printf("SYMLOOP_MAX = %d\n", _POSIX_SYMLOOP_MAX);
#else
    printf("идентификатор SYMLOOP_MAX не найден\n");
#endif

#if defined(TIMER_MAX)
    printf("TIMER_MAX = %d\n", _POSIX_TIMER_MAX);
#else
    printf("идентификатор TIMER_MAX не найден\n");
#endif

#if defined(TTY_NAME_MAX)
    printf("TTY_NAME_MAX = %d\n", _POSIX_TTY_NAME_MAX);
#else
    printf("идентификатор TTY_NAME_MAX не найден\n");
#endif

#if defined(TZNAME_MAX)
    printf("TZNAME_MAX = %d\n", _POSIX_TZNAME_MAX);
#else
    printf("идентификатор TZNAME_MAX не найден\n");
#endif

    return 0;
}
