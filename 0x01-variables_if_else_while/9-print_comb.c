#include <stdio.h>

/**
 * main - Entry Point
 * Return: Alwasy 0 (Succes/correct)
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	if (num == 57)
	{
		break;
	}

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);

}
