#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ptr_bin - function that prints a variable type b
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_bin(va_list list)
{
	unsigned int x = va_arg(list, unsigned int), ch = 0;

	if (x == 0)
	{
		_putchar('0');
		ch++;
	}
	else
	{
		print_bin(x);
		while (x)
		{
			x = x / 2;
			ch++;
		}
	}
	return (ch);
}
/**
 * print_bin - function that prints a variable type b
 * @n: number to convert
 */
void print_bin(unsigned int n)
{
	int b;

	if (n > 0)
	{
		b = n % 2;
		if (b == 1)
			n = n - 1;
		print_bin(n / 2);
		_putchar('0' + b);
	}
}
