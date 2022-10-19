#include "main.h"

/**
 * print_times_table - print multiplication table
 * @n: int arg
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int rows, columns, product;

		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				product = rows * columns;
				if (columns == 0)
				{
					_putchar('0');
				}
				else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + product / 100);
					_putchar('0' + (product / 10) % 10;
					_putchar('0' + product % 10);
				}
			}
					_putchar('\n');
		}
	}
}	

