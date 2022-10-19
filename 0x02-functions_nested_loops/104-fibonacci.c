#include <stdio.h>
#include"main.h"
#include <stdint.h>



/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned long a = 0, b = 1;
	int i, overflow;
	unsigned long sum;
	long a_part1, a_part2, b_part1, b_part2, sum_part1, sum_part2;

	for (i = 1; i < 93; i++)
	{
		sum = a + b;
		i == 1 ? printf("%lu", sum) : printf(", %lu", sum);
		a = b;
		b = sum;
	}

	a_part1 = a / 1000000000;
	a_part2 = a % 1000000000;
	b_part1 = b / 1000000000;
	b_part2 = b % 1000000000;

	for (; i < 99; i++)
	{
		overflow = (a_part2 + b_part2) / 1000000000;
		sum_part2 = (a_part2 + b_part2) % 1000000000;
		sum_part1 = a_part1 + b_part1 + overflow;
		printf(", %lu%lu", sum_part1, sum_part2);
		a_part1 = b_part1;
		a_part2 = b_part2;
		b_part1 = sum_part1;
		b_part2 = sum_part2;
	}

	printf("\n");
	return (0);

}
