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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = dest[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
