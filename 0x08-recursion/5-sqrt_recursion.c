/**
 * find_root - find square root of n, starting from the smallest
 * possible, 0
 * @n: n
 * @m: consecutive odd numbers
 * https://www.cuemath.com/algebra/squares-and-square-roots/
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int m)
{
	if (n - m == 0)
	{
		return (m / 2 + 1);
	}
	else if (n - m < 0)
	{
		return (-1);
	}
	return (find_root(n - m, m + 2));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	return (find_root(n, 1));
}
