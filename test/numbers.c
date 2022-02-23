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

	/*This should return the same number and "Du-s"*/
	len1 = _printf("%u-%u\n", 90, -90);
	len2 = printf("%u-%u\n", 90, -90);
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);

	/*Cases with %
	len1 = _printf("%%z-%%z\n", "Du", 'S');
	len2 = printf("%%z-%%z\n", "Du", 'S');
	_printf("len:[%d-%i]\n", len1, len2);
	printf("len:[%d-%i]\n", len1, len2);*/

	/*printf("%%%\n");
	_printf("%%%");*/

	return (0);
}
