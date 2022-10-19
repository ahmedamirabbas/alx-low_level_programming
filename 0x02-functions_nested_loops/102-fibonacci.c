#include <stdio.h>

/**
 * main - prints 1st 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long a = 0, b = 1;
	int i;
	long sum;

	for (i = 1; i < 50; i++)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
	}
	sum = a + b;
	printf("%li\n", sum);
	return (0);
}
