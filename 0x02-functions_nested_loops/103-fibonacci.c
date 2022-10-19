#include <stdio/h>

/**
 * main - prints sum of Fibonacci sequence up to 4M
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1;
	int sum;
	int sum_of_evens = 0;

	for (; sum < 4000000;)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0 && sum < 4000000)
		{
			sum_of_evens += sum;
		}
	}
	printf("%i\n", sum_of_evens);
	return (0);
}
