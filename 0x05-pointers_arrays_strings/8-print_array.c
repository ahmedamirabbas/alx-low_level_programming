#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an integers array
 * @a: the array
 * @n: number of elements
 */

void print_array(int *a, int *n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++
	}

	printf("\n");
}
