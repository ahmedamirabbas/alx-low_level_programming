#include "main.h"

/**
 * _islower - checks for lower case char
 * c: contains value to be compared
 * Return: always 0
 */

int _islower(int c);

{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
