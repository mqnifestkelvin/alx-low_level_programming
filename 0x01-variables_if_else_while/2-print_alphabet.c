#include <stdio.h>
/**
 * main - main entry
 * Description: This program prints the alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
