#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int counter = 1024;
	int i;
	int sum = 0;

	for (i = 0; i < counter; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
