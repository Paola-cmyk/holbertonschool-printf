#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_string(char *str);
int print_percent(void);
int print_char(char p);

#endif

