#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to be added
 * Return: a pointer to the final string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
