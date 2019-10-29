#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * ptr_int - function that prints a variable type d or i
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_int(va_list list)
{
	int x = va_arg(list, int), ch = 0;

	ch = print_number(x);
	return (ch);
}
/**
 * ptr_uns - function that prints a variable type u
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_uns(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	int ch = 0;

	ch = print_number(x);
	return (ch);
}
