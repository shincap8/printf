#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
* Return: returns the number of digits printed
*/
int print_number(int n)
{
	int m = 1, c = 0, cont = 0;
	unsigned int p;

	p = n;
	if (n < 0)
	{
		_putchar('-');
		cont++;
	}
	if (p > 9)
	{
		while (p > 9)
		{
			c++;
			m = m * 10;
			p = p / 10;
		}
		p = n;
		_putchar('0' + (p / m));
		m = m / 10;
		cont++;
		while (c > 0)
		{
			p = n;
			p = p / m;
			_putchar('0' + (p % 10));
			cont++;
			m = m / 10;
			c--;
		}
	}
	else
	{
		_putchar('0' + n);
		cont++;
	}
	return (cont);
}
