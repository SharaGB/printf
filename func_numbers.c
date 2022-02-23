#include "main.h"
/**
 * print_int - print type int
 * @i: pointer to argument
 * Return: Nothing
 */
int print_int(va_list i)
{
	int j = (va_arg(i, int));

	print_number_flag(j, 0);
	return (count_digit_base_flag(j, 10, 0));
}

/**
 * print_dec - print type decimal
 * @d: pointer to argument
 * Return: Nothing
 */
int print_dec(va_list d)
{
	int i = va_arg(d, int);

	print_number_flag(i, 0);
	return (count_digit_base_flag(i, 10, 0));
}

/**
 * decabin - Function aux
 * @n: Check n
 * @i: Counter
 * @pr: Pointer to argument
 * @base: Check base
 * Return: Nothing
 */
char *decabin(int n, char *pr, int i, int base)
{
	if (n)
	{
		pr[i] = n % base + '0';
		decabin(n / base, pr, i + 1, base);
	}
	return (pr);
}

/**
 * print_b - Print type binary
 * @d: Pointer to argument
 * Return: Nothing
 */
int print_b(va_list d)
{
	int decimal = 0, j = 0;
	int len = 0, len_num = 0;
	char *p = NULL;

	decimal = va_arg(d, int);
	if (!decimal)
	{
		_putchar(48);
		return (1);
	}
	len_num = count_digit_base_flag(decimal, 2, 0);
	p = malloc(1024 * sizeof(char));
	if (!p)
	{
		free(p);
		return (-1);
	}
	if (decimal < 0)
	{
		decimal = -1 * decimal;
		while (j < 21)
		{
			_putchar(1 + '0');
			j++;
			len++;
		}
	}
	p = decabin(decimal, p, 0, 2);
	p[len_num] = '\0';
	rev_string(p);
	len += print_chars(p);
	free(p);
	return (len);
}

/**
 * print_oct - Print type octal
 * @o: Pointer to argument
 * Return: Nothing
 */
int print_oct(va_list o)
{
	unsigned int decimal = 0;
	int len = 0, len_num = 0;
	char *p = NULL;

	decimal = va_arg(o, unsigned int);
	len_num = count_digit_base_flag(decimal, 8, 1);
	p = malloc(len_num * sizeof(char));
	if (!p)
	{
		free(p);
		return (-1);
	}

	p = decabin(decimal, p, 0, 8);
	p[len_num] = '\0';
	rev_string(p);
	len = print_chars(p);
	free(p);
	return (len);
}
