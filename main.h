#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_string(char *str);
int print_percent(void);
int print_char(char p);
int print_number(int n);
int _putchar(char c);

#endif

