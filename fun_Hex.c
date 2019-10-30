#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ptr_Hex - function that prints in uppercase hexadecimal number
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_Hex(va_list list)
{
	unsigned int x = va_arg(list, unsigned int), ch = 0;

	if (x == 0)
	{
		_putchar('0');
		ch++;
	}
	else
	{
		print_Hex(x);
		while (x)
		{
			x = x / 16;
			ch++;
		}
	}
	return (ch);
}
/**
 * print_Hex - function that prints a variable in hexadecimal
 * @n: number to convert
 */
void print_Hex(unsigned int n)
{
	int b;

	if (n > 0)
	{
		b = n % 16;
		print_Hex(n / 16);
		if (b < 10)
			_putchar(b + 48);
		else
			_putchar(b + 55);
	}
}
