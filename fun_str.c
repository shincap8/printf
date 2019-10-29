#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * ptr_char - function that prints a character
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_char(va_list list)
{
	char letter = va_arg(list, int);

	_putchar(letter);
	return (1);
}

/**
 * ptr_str - function that prints  a string
 * @list: list of functions
 * Return: the number of characters printed
 */
int ptr_str(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
