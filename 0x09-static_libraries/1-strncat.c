/**
 * _strncat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n: n bytes to concatenate
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, indx;

	i = 0;
	indx = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[indx] && indx < n)
	{
		dest[i] = src[indx];
		i++, indx++;
	}
	dest[i] = '\0';
	return (dest);
}
