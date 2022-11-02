/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * _is_palindrome - compares head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int _is_palindrome(char *head, char *tail)
{
	if (head >= tail)
	{
		return (1);
	}
	if (*head == *tail)
	{
		return (_is_palindrome(head + 1, tail - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int last_indx = _strlen_recursion(s) - 1;

	return (_is_palindrome(s, s + last_indx));
}
