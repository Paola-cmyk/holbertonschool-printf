#include <stdarg.h>
#include "printf.h"
#include <stdio.h>
/**
 * print_char - prints a single character
 * @p: character to print
 *
 * Return: number of charaters printed
 */
int print_char(char p)
{
	putchar(p);
	return (1);
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: numbers of characters printed
 */
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

/**
 * print_percent - prints a literal '%'
 *
 * Return: the number of characters printed
 */
int print_percent(void)
{
	putchar('%');
	return (1);
}

/**
 * _printf - custom printf function
 * @format: the format string containing the format specifiers
 *
 * Return: the number of characters printed
 */
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
