#include "main.h"
/**
 * _len - The length of a string
 * @s: Check the string
 * Return: Always 0
 */
int _len(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}



/**
 * print_chars - print characteres
 * @str: string passed
 * Return: len of str
 */
int print_chars(char *str)
{
	int i = 0;

	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}

/**
 * rev_string - Function that reverse a string
 * @s: string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char c[1024];
	char *p = c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		p[i - j - 1] = *(s + j);
	}
	for (k = 0; k <= i - 1; k++)
	{
		s[k] = p[k];
	}
}


/**
 * print_number_flag - Prints a prime number
 * @n: check n
 * @flag: indicator of flag (ex. "%d" -> 0, "%u"->1 )
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
void print_number_flag(int n, int flag)
{
	unsigned int n1;

	if (n < 0 && flag == 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else if (n < 0 && flag == 1)
	{
		n1 = UINT_MAX + n + 1;
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number_flag(n1 / 10, flag);
	}
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit_base_flag - Function count digits
 * @i: Check i
 * @base: Check base
 * @flag: indicator of flag (ex. "%d" -> 0, "%u"->1 )
 * Return: i
 */
int count_digit_base_flag(int i, int base, int flag)
{
	unsigned int j = 0;
	unsigned int k;

	if (i == 0)
	{
		return (1);
	}
	if (i < 0 && flag == 0)
	{
		k = i * -1;
		j++;
	}
	else if (i < 0 && flag == 1)
	{
		k = UINT_MAX + i + 1;
	}
	else
		k = i;
	while (k != 0)
	{
		k /= base;
		j++;
	}
	return (j);
}


