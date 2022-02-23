#include "main.h"
/**
 * print_char - print type char
 * @c: pointer to argument
 * Return: Nothing
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_str - print type char *
 * @s: pointer to argument
 * Return: Nothing
 */
int print_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	i = print_chars(str);
	return (i);
}

/**
 * print_perc - print a porcent sing (%)
 * @p: pointer to argument
 * Return: Nothing
 */
int print_perc(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
