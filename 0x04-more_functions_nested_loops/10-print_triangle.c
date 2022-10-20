#include "main.h"

/**
 * print_triangle - draws triangle
 * @size: triangle size
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		k = size - 1;

		for (i = 0; i < size; i++)
		{
			for (j = k; j > 0; z--)
			{
				_putchar(' ');
			}

			for (l = 0; l < i; l++)
			{
				_putchar(35);
			}

			k--;

			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
