#include <limits.h>
#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 * Return: Number of characters printed
 */
int print_number(int n)
{
    int count = 0;
    unsigned int num;

    if (n == INT_MIN)
    {
        _putchar('-');
        count++;
        _putchar('2');
        count++;
        num = 147483648;
    }
    else if (n < 0)
    {
        _putchar('-');
        count++;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    _putchar((num % 10) + '0');
    count++;

    return (count);
}

