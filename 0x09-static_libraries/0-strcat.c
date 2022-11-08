/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	while (*src)
	{
		*(dest + i) = *src;
		i++, src++;
	}

	*(dest + i) = '\0';
	return (dest);
}
