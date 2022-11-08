#define NULL 0

/**
 * _strstr - locate and return pointer to first occurrence
 * of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurrence
 * of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(needle + i) && *(haystack + j))
	{
		for (; *(haystack + j) && *(needle + i); j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				i++;
			}
			else
			{
				i = 0;
			}
		}
	}
	if (*(needle + i) == '\0')
	{
		return (haystack + j - i);
	}
	return (NULL);
}
