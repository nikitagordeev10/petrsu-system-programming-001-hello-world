/**
 * task_
 * 
 
 
 
 
 3.c — программа для вывода значения всех конфигурационных пределов, доступных при компиляции
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include<stdio.h>
#include<limits.h>

int main()
{
    /* Таблица 2.13. Примеры конфигурационных пределов */
    printf
        ("\nТаблица 2.13. Примеры конфигурационных пределов\n");

#ifdef ARG_MAX
    printf("ARG_MAX = %u\n", ARG_MAX);
#else
    printf("идентификатор ARG_MAX не найден\n");
#endif

#ifdef ATEXIT_MAX
    printf("ATEXIT_MAX = %u\n", ATEXIT_MAX);
#else
    printf("идентификатор ATEXIT_MAX не найден\n");
#endif

#ifdef CHARCLASS_NAME_MAX
    printf("CHARCLASS_NAME_MAX = %u\n", CHARCLASS_NAME_MAX);
#else
    printf
        ("идентификатор CHARCLASS_NAME_MAX не найден\n");
#endif

#ifdef CHILD_MAX
    printf("CHILD_MAX = %u\n", CHILD_MAX);
#else
    printf("идентификатор CHILD_MAX не найден\n");
#endif

#ifdef CLOCKTICKSPERSECOND
    printf("CLOCKTICKSPERSECOND = %u\n", CLOCKTICKSPERSECOND);
#else
    printf
        ("идентификатор CLOCKTICKSPERSECOND не найден\n");
#endif

#ifdef COLL_WEIGHTS_MAX
    printf("COLL_WEIGHTS_MAX = %u\n", COLL_WEIGHTS_MAX);
#else
    printf
        ("идентификатор COLL_WEIGHTS_MAX не найден\n");
#endif

#ifdef FILESIZEBITS
    printf("FILESIZEBITS = %u\n", FILESIZEBITS);
#else
    printf("идентификатор FILESIZEBITS не найден\n");
#endif

#ifdef HOST_NAME_MAX
    printf("HOST_NAME_MAX = %u\n", HOST_NAME_MAX);
#else
    printf("идентификатор HOST_NAME_MAX не найден\n");
#endif

#ifdef IOV_MAX
    printf("IOV_MAX = %u\n", IOV_MAX);
#else
    printf("идентификатор IOV_MAX не найден\n");
#endif

#ifdef LINE_MAX
    printf("LINE_MAX = %u\n", LINE_MAX);
#else
    printf("идентификатор LINE_MAX не найден\n");
#endif

#ifdef LINK_MAX
    printf("LINK_MAX = %u\n", LINK_MAX);
#else
    printf("идентификатор LINK_MAX не найден\n");
#endif

#ifdef LOGIN_NAME_MAX
    printf("LOGIN_NAME_MAX = %u\n", LOGIN_NAME_MAX);
#else
    printf
        ("идентификатор LOGIN_NAME_MAX не найден\n");
#endif

#ifdef MAX_CANON
    printf("MAX_CANON = %u\n", MAX_CANON);
#else
    printf("идентификатор MAX_CANON не найден\n");
#endif

#ifdef MAX_INPUT
    printf("MAX_INPUT = %u\n", MAX_INPUT);
#else
    printf("идентификатор MAX_INPUT не найден\n");
#endif

#ifdef NAME_MAX
    printf("NAME_MAX = %u\n", NAME_MAX);
#else
    printf("идентификатор NAME_MAX не найден\n");
#endif

#ifdef NGROUPS_MAX
    printf("NGROUPS_MAX = %u\n", NGROUPS_MAX);
#else
    printf("идентификатор NGROUPS_MAX не найден\n");
#endif

#ifdef OPEN_MAX
    printf("OPEN_MAX = %u\n", OPEN_MAX);
#else
    printf("идентификатор OPEN_MAX не найден\n");
#endif

#ifdef PAGESIZE
    printf("PAGESIZE = %u\n", PAGESIZE);
#else
    printf("идентификатор PAGESIZE не найден\n");
#endif

#ifdef PAGE_SIZE
    printf("PAGE_SIZE = %u\n", PAGE_SIZE);
#else
    printf("идентификатор PAGE_SIZE не найден\n");
#endif

#ifdef PATH_MAX
    printf("PATH_MAX = %u\n", PATH_MAX);
#else
    printf("идентификатор PATH_MAX не найден\n");
#endif

#ifdef PIPE_BUF
    printf("PIPE_BUF = %u\n", PIPE_BUF);
#else
    printf("идентификатор PIPE_BUF не найден\n");
#endif

#ifdef RE_DUP_MAX
    printf("RE_DUP_MAX = %u\n", RE_DUP_MAX);
#else
    printf("идентификатор RE_DUP_MAX не найден\n");
#endif

#ifdef STREAM_MAX
    printf("STREAM_MAX = %u\n", STREAM_MAX);
#else
    printf("идентификатор STREAM_MAX не найден\n");
#endif

#ifdef SYMLINK_MAX
    printf("SYMLINK_MAX = %u\n", SYMLINK_MAX);
#else
    printf("идентификатор SYMLINK_MAX не найден\n");
#endif

#ifdef SYMLOOP_MAX
    printf("SYMLOOP_MAX = %u\n", SYMLOOP_MAX);
#else
    printf("идентификатор SYMLOOP_MAX не найден\n");
#endif

#ifdef TTY_NAME_MAX
    printf("TTY_NAME_MAX = %u\n", TTY_NAME_MAX);
#else
    printf("идентификатор TTY_NAME_MAX не найден\n");
#endif

#ifdef TZNAME_MAX
    printf("TZNAME_MAX = %u\n", TZNAME_MAX);
#else
    printf("идентификатор TZNAME_MAX не найден\n");
#endif
}
