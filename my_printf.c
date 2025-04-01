
#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/* Declare the print functions */
int print_char(char p);
int print_string(char *str);
int print_percent(void);
int print_number(int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int is_uppercase);

/* _printf function as usual */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1) == 'c')
        {
            count += print_char(va_arg(args, int));
            format++;
        }
        else if (*format == '%' && *(format + 1) == 's')
        {
            count += print_string(va_arg(args, char *));
            format++;
        }
        else if (*format == '%' && *(format + 1) == '%')
        {
            count += print_percent();
            format++;
        }
        else if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
        {
            count += print_number(va_arg(args, int));
            format++;
        }
        else if (*format == '%' && *(format + 1) == 'u')
        {
            count += print_unsigned(va_arg(args, unsigned int));
            format++;
        }
        else if (*format == '%' && *(format + 1) == 'o')
        {
            count += print_octal(va_arg(args, unsigned int));
            format++;
        }
        else if (*format == '%' && (*(format + 1) == 'x' || *(format + 1) == 'X'))
        {
            count += print_hex(va_arg(args, unsigned int), (*(format + 1) == 'X'));
            format++;
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);

    return (count);
}

