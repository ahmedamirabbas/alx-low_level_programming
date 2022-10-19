#include "main.h"

/**
 * print_sign - returns 1 is letter lower case, 0 if not
 *
 * @n: the integr to print
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
