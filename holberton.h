#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

typedef struct op
{
			char form;
			int (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int _putchar(char c);
int ptr_char(va_list list);
int ptr_str(va_list list);
int print_number(int n);
int ptr_int(va_list list);
#endif
