#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 on error
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	int n = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	if (n >= 25)
	{
		counter += n / 25;
		n = n % 25;
	}
	if (n >= 10)
	{
		counter += n / 10;
		n = n % 10;
	}
	if (n >= 5)
	{
		counter += n / 5;
		n = n % 5;
	}
	if (n >= 2)
	{
		counter += n / 2;
		n = n % 2;
	}
	if (n >= 1)
	{
		counter += n / 1;
	}
	printf("%i\n", counter);
	return (0);
}
