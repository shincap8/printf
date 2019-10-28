#include "holberton.h"
/**
* print_number - prints an integer
* @n: integern
*
* Description: this function prints an integer
* Return: returns the number of digits printed
*/
int print_number(int n)
{
	int p, m, c, cont = 0;

	m = 1;
	c = 0;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		cont++;
	}
	if (n > 9)
	{
		p = n;
		while (p > 9)
		{
			c++;
			m = m * 10;
			p = p / 10;
		}
		_putchar('0' + (n / m));
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
