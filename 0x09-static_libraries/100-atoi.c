/**
 * get_num_indx - find index where a digit is first found in string
 * @s: string to search
 * Return: a pointer to index where digit is first found
 */
char *get_num_indx(char *s)
{
	int i;

	for (i = 0; *s; i++)
	{
		if (*s >= '0' && *s <= '9')
		{
			return (s);
		}
		s++;
	}
	return (0);
}

/**
 * _num_digits - returns the number of digits in the number
 * @indx: indx where number start in the string
 * Return: number of digits
 */
int _num_digits(char *indx)
{
	int len;

	len = 0;
	while (*indx)
	{
		if (!(*indx >= '0') && !(*indx >= '9'))
		{
			break;
		}
		indx++, len++;
	}
	return (len);
}

/**
 * num_tens_deg - find the power of tens for the number
 * @len: number of digit in the number
 * Return: integer
 */
int num_tens_deg(int len)
{
	int tens = 1;

	while (len - 1)
	{
		tens *= 10;
		len--;
	}
	return (tens);
}

/**
 * num_sign - determine if integer is negative or positive
 * @start: start of the string
 * @stop: first digit of the number
 * Return: integer 1 or -1
 */
int num_sign(char *start, char *stop)
{
	int i, sign;

	sign = 0;
	for (i = 0; start != stop; i++)
	{
		if (*start == '-')
		{
			sign++;
		}
		start++;
	}
	return (sign % 2 == 0 ? 1 : -1);
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	char *num_indx;
	int i, tens_deg, num_digs, digit;
	unsigned int num;

	num_indx = get_num_indx(s);
	if (num_indx == 0)
	{
		return (0);
	}
	num_digs = _num_digits(num_indx);
	tens_deg = num_tens_deg(num_digs);
	num = 0;
	for (i = 0; num_digs; i++)
	{
		digit = *(num_indx + i) % '0';
		num += tens_deg *digit;
		tens_deg /= 10;
		num_digs--;
	}
	return (num *num_sign(s, num_indx));
}
