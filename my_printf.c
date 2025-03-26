#include "printf.h"
#include <stdio.h>
#include <stadarg.h>

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
	if (*format == '%' && *(format + 1) == 's')
	{
		char *str = va_arg(args, char *);

		while (*str)
		{
			putchar(*str);
			str++;
			count++;
		}

		format++;
		}
		else if (*format == '%' && *(format + 1) == 'd')
		{
			int num = va_args(args, int);

			printf("%d", num);

			count++;
			format++;
		}
		else
		}
		putchar(*format);
		count++;
		}

		format++;

	}
	va_end(args);

	return (count);
}
