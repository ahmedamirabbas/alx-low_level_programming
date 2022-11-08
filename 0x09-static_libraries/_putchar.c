#include<stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, the return value is a short item count (or zero).
 */

int _putchar(char c)
{
	return fwrite(&c, sizeof(c), 1, stdout);
}
