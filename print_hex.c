#include "main.h"
#include <stdio.h>

int print_hex(unsigned int n, int is_uppercase)
{
    int count = 0;
    char *hex_chars = is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

    if (n / 16)
        count += print_hex(n / 16, is_uppercase);

    putchar(hex_chars[n % 16]);
    count++;

    return (count);
}

