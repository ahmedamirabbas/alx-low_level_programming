#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches
 * a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
