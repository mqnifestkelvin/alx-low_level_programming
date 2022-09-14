#include "main.h"
/**
 * print_last_digit - Code entry point.
 *
 * Description: A fuction that prints the last digit.
 *
 * @number: is an integer
 *
 * Return: 0
 */
int print_last_digit(int number)
{
	int result;

	if (number < 10 && number > 0)
	{
		_putchar(number);
	}
	else if (number == 0)
	{
		_putchar(number);
	}
	else if (number >= 10)
	{
		result = number % 10;
		_putchar(result);
	}
	else if (number > -10 && number < 0)
	{
		result = number * -1;
		_putchar(number);
	}
	else if (number <= -10)
	{
		result = number % 10;
		_putchar(result);
	}
	return (0);
}
