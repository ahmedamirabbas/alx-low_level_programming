#include "main.h"

/**
 * _isdigit - checks for digit character
 * @c: character to check
 * Return: 1 if it's a digit , 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
