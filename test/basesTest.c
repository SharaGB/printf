#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1 = 0;
	int len2 = 0;

	_printf("----------------------------\n");
	_printf("OCTAL (o)\n");
	len1 = _printf("%o\n", 98);
	len2 = printf("%o\n", 98);
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);

	_printf("----------------------------\n");
	_printf("OCTAL (o)\n");
	len1 = _printf("%o\n", 98);
	len2 = printf("%o\n", 98);
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);

	_printf("----------------------------\n");
	_printf("BINARY (not in original printf) (b)\n");
	/*This should return the same number and 1100010, 1100100 */
	len1 = _printf("%b\n", 98);
	len2 = _printf("%b\n", 100);
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);

	/*Cases with %
	len1 = _printf("%%z-%%z\n", "Du", 'S');
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);
	*/

	_printf("----------------------------\n");
	_printf("OCTAL (o)\n");
	len1 = _printf("%o\n", 98);
	len2 = printf("%o\n", 98);
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);

	return (0);
}
