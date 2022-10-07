/**
 * task_1.c — программа вывода пределов значений целочисленных типов из файла <limits.h>
 *
 * Copyright (c) <2022> <Гордеев Никита>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    printf
        ("\nТаблица 2.6. Пределы значений целочисленных типов из файла <limits.h>\n");
#if defined(CHAR_BIT)
    printf("CHAR_BIT = %d\n", CHAR_BIT);
#else
    printf("идентификатор CHAR_BIT не найден\n");
#endif

#if defined(CHAR_MAX)
    printf("CHAR_MAX = %d\n", CHAR_MAX);
#else
    printf("идентификатор CHAR_MAX не найден\n");
#endif

#if defined(CHAR_MIN)
    printf("CHAR_MIN = %d\n", CHAR_MIN);
#else
    printf("идентификатор CHAR_MIN не найден\n");
#endif

#if defined(SCHAR_MAX)
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);
#else
    printf("идентификатор SCHAR_MAX не найден\n");
#endif

#if defined(SCHAR_MIN)
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
#else
    printf("идентификатор SCHAR_MIN не найден\n");
#endif

#if defined(UCHAR_MAX)
    printf("UCHAR_MAX = %u\n", UCHAR_MAX);
#else
    printf("идентификатор UCHAR_MAX не найден\n");
#endif

#if defined(INT_MAX)
    printf("INT_MAX = %d\n", INT_MAX);
#else
    printf("идентификатор INT_MAX не найден\n");
#endif

#if defined(INT_MIN)
    printf("INT_MIN = %d\n", INT_MIN);
#else
    printf("идентификатор INT_MIN не найден\n");
#endif

#if defined(UINT_MAX)
    printf("UINT_MAX = %u\n", UINT_MAX);
#else
    printf("идентификатор UINT_MAX не найден\n");
#endif

#if defined(SHRT_MAX)
    printf("SHRT_MAX = %d\n", SHRT_MAX);
#else
    printf("идентификатор SHRT_MAX не найден\n");
#endif

#if defined(SHRT_MIN)
    printf("SHRT_MIN = %d\n", SHRT_MIN);
#else
    printf("идентификатор SHRT_MIN не найден\n");
#endif

#if defined(USHRT_MAX)
    printf("USHRT_MAX = %u\n", USHRT_MAX);
#else
    printf("идентификатор USHRT_MAX не найден\n");
#endif

#if defined(LONG_MAX)
    printf("LONG_MAX = %ld\n", LONG_MAX);
#else
    printf("идентификатор LONG_MAX не найден\n");
#endif

#if defined(LONG_MIN)
    printf("LONG_MIN = %ld\n", LONG_MIN);
#else
    printf("идентификатор LONG_MIN не найден\n");
#endif

#if defined(ULONG_MAX)
    printf("ULONG_MAX = %lu\n", ULONG_MAX);
#else
    printf("идентификатор ULONG_MAX не найден\n");
#endif

#if defined(LLONG_MAX)
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
#else
    printf("идентификатор LLONG_MAX не найден\n");
#endif

#if defined(LLONG_MIN)
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
#else
    printf("идентификатор LLONG_MIN не найден\n");
#endif

#if defined(ULLONG_MAX)
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
#else
    printf("идентификатор ULLONG_MAX не найден\n");
#endif

#if defined(MB_LEN_MAX)
    printf("MB_LEN_MAX = %d\n", MB_LEN_MAX);
#else
    printf("идентификатор MB_LEN_MAX не найден\n");
#endif
    return 0;
}
