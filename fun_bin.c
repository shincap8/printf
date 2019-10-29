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
        int x = va_arg(list, int), ch = 0;

        while (x)
	{
		x = x / 2;
		ch++;
	}
	print_bin(x);
	return (ch);
}
/**
 * print_bin - function that prints a variable type b
 * @list: list of functions
 * Return: the number of characters printed
 */
void print_bin(int n)
{
	int b;

	if (x > 0)
	{
		b = n % 2;
		print_bin(n / 2);
		_putchar('0' + b);
	}
}
