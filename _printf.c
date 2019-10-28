#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function that converts and prints arguments
 * @format: Arguments
 * Return: Returns number of bytes of charcters
 */

int _printf(const char *format, ...)
{
	op_t array[] = {
			{'c', ptr_char},
			{'s', ptr_str},
			{'d', ptr_int},
			{'i', ptr_int},
			{'\0', NULL}
	};

	int i = 0, j, ch = 0;
	va_list list;

	if (!format)
		return (-1);

	if (i == 0 && format[i + 1])
		return (-1);

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (array[j].form != '\0')
		{
			if (format[i] == '%')
			{
				if (array[j].form == format[i + 1])
				{
					ch += array[j].f(list);
					i++;
					break;
				}
				if (format[i] == '%' &&  format[i + 1] == '\0')
				{
					_putchar('%');
				}
				if (format[i] == '%' && format[i + 1] == '%')
				{
				_putchar('%');
				i++;
				}
			}
			else
			{
				_putchar(format[i]);
				ch++;
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	return (ch);
}
