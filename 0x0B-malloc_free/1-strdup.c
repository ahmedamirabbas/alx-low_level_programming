#include <stdlib.h>
#include<stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *new_str;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	new_str = malloc(size);
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (_strcpy(new_str, str));
}
