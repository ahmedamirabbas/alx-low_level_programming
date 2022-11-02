#include "main.h"

/**
 * _pow_recursion - raise x to power y
 * @x: number
 * @y: power to raise to
 * Return: power of a number, -1 if power less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (y < 0 ? -1 : 1);
	}
	return (x == 0 ? 0 : x * _pow_recursion(x, y - 1));
}
