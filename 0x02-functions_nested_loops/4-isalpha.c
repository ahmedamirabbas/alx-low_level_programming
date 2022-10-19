#include "main.h"

/**
 * _islower - checks if c is a letter
 * c: contains value to be compared
 * Return: always 0
 */

int _islower(int c);

{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
