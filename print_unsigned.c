#include "main.h"
#include <stdio.h>

int print_unsigned(unsigned int n)
{
    int count = 0;

    if (n / 10)
        count += print_unsigned(n / 10);

    putchar((n % 10) + '0');
    count++;

    return (count);
}

