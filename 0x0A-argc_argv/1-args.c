#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
