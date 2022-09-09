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
		printf("%c", alphabet);
	}
	return (0);
}
