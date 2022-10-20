#include "main.h"

/**
 * print_triangle - draws triangle
 * @size: triangle size
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	i = 1;

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - 1)
		{
			_putchar(' ');
			j++;
		}

		j = 0;

		while (j < i)
		{
			putchar('#');
			j++;
		}
		
		_putchar('\n');
		i++;
	}
	
	if (i == 1)
		_putchar('\n');
}
