#include <stdio.h>
#include "main.h"

int print_string(char *str)
{
    int count = 0;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        putchar(*str);
        str++;
        count++;
    }

    return (count);
}

