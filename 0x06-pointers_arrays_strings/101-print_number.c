#include "main.h"
/**
 * print_number - This function prints an integer.
 *
 * @n: integer.
 *
 * Return: void
 *
 */
void print_number(int n)
{
	int div = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}
