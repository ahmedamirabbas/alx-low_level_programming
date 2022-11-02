#include "main.h"

/**
 * factorial - calculates the factorial of n
 * @n: The number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (n < 0 ? -1 : 1);
	}
	return (n * factorial(n - 1));
}
