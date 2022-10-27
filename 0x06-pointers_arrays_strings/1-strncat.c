#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: target string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: pointer to the final string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
