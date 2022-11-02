/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	n = (float)n;
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}
	else if (n < 2 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	return (1);
}
