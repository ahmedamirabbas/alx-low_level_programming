#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

print_alphabet_x10()
{
	int alphabet;
	int count;

	count = 0;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}


	        count++;
		_putchar('\n');
	}

}