#include <stdio.h>
#include <stdlib.h>

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: 1 only if entire string is a number, 0 if not
 */

int is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - add integers.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 on error
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		num = atoi(argv[i]);
		if (!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
