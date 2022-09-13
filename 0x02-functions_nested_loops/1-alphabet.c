#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: A function that prints the alphabet:
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
