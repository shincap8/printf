#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ptr_hex - function that prints the hexadecimal number
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_hex(va_list list)
{
	unsigned int x = va_arg(list, unsigned int), ch = 0;

	if (x == 0)
	{
		_putchar('0');
		ch++;
	}
	else
	{
		print_hex(x);
		while (x)
		{
			x = x / 16;
			ch++;
		}
	}
	return (ch);
}
/**
 * print_hex - function that prints a variable in hexadecimal
 * @n: number to convert
 */
void print_hex(unsigned int n)
{
	int b;

	if (n > 0)
	{
		b = n % 16;
		print_hex(n / 16);
		if (b > 9)
			_putchar(b + 87);
		else
			_putchar('0' + b);
	}
}
