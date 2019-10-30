#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ptr_o - function that prints the octal number
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_o(va_list list)
{
	unsigned int x = va_arg(list, unsigned int), ch = 0;

	if (x == 0)
	{
		_putchar('0');
		ch++;
	}
	else
	{
		print_o(x);
		while (x)
		{
			x = x / 8;
			ch++;
		}
	}
	return (ch);
}
/**
 * print_o - function that prints  a variable in octal
 * @n: number to convert
 */
void print_o(unsigned int n)
{
	int b;

	if (n > 0)
	{
		b = n % 8;
		print_o(n / 8);
		_putchar('0' + b);
	}
} 
