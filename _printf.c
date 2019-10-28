#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _arr - function that goes through the array
 * @x: the character to be compared
 * @list: arguments
 * Return: Returns number of characters printed
 */

int _arr(const char x, va_list list)
{
	op_t array[] = {
			{'c', ptr_char},
			{'s', ptr_str},
			{'d', ptr_int},
			{'i', ptr_int},
			{'\0', NULL}
	};

	int j = 0, cc = 0;

	while (array[j].form != '\0')
	{
		if (x == array[j].form)
			cc += array[j].f(list);
		else
			return (-1);
		j++;
	}
	return (cc);
}
/**
 * _printf - function that converts and prints arguments
 * @format: Arguments
 * Return: Returns number of bytes of charcters
 */
int _printf(const char *format, ...)
{
	int i = 0, a = 0, ch = 0;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			a = _arr(format[i + 1], list);
			i++;
			break;
		}
		if ((format[i] == '%' &&  format[i + 1] == '\0') || a == -1)
		{
			return (-1);
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			ch++;
			i++;
		}
		else
		{
			_putchar(format[i]);
			ch++;
		}
		ch += a;
		i++;
	}
	va_end(list);
	return (ch);
}
