#include "main"
/**
 * print_sign -
 *
 * Description: 
 *
 * @c:
 *
 * Return:
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		return (0);
	}
	else if (n == 0)
	{
		_putchar('0')
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-')
		return (-1);
	}
	return (0);
}
