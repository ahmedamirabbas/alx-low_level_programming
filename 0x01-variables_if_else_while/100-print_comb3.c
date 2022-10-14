#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success/completed)
 */

int main(void)
{
	int number_left;
	int number_right;

	for (number_right = 0; number_right <= '9'; number_right++)
	{
		for (number_left = number_right + 1 ; number_left <= '9'; number_left++)
		{

			putchar(number_left);
			putchar (number_right);

			if ((number_right != '8' || number_left != '9')
			{
			putchar(',');
			putchar (' ');
			}

		}

	}

	putchar('\n');

	return (0);

}
