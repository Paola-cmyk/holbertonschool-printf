#include "main.h"
#include <stdio.h>

int print_octal(unsigned int n)
{
    int count = 0;

    if (n / 8)
        count += print_octal(n / 8);

    putchar((n % 8) + '0');
    count++;

    return (count);
}

