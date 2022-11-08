#include <stdlib.h>

/**
 * num_of_words - count the number of words in a string
 * @text: string
 * Return: number of words
 */

int num_of_words(char *text)
{
	int i, j = 0;

	for (i = 0; text[i]; i++)
	{
		if (text[i] != ' ' && (text[i + 1] == ' ' || text[i + 1] == '\0'))
		{
			j++;
		}
	}
	return (j);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: an array of words
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, j = 0, num_words, len_w = 0, indx = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = num_of_words(str);
	arr = malloc((num_words + 1) * sizeof(char *));
	if (arr == NULL || num_words == 0)
	{
		free(arr);
		return (NULL);
	}
	while (i < num_words)
	{
		if (str[indx] != ' ' && (str[indx + 1] == ' ' || str[indx + 1] == '\0'))
		{
			len_w += 1;
			arr[i] = malloc(len_w + 1);
			if (arr[i] == NULL)
			{
				for (i = 0; i <= num_words; i++)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; len_w; j++)
			{
				len_w--;
				arr[i][j] = str[indx - len_w];
			}
			arr[i][j] = '\0';
			i++, indx++;
			continue;
		}
		if (str[indx] != ' ')
			len_w++;
		indx++;
	}
	arr[i] = NULL;
	return (arr);
}
