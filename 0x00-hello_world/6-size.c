#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, e;

	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long int);
	d = sizeof(long long);
	e = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", a);
	printf("Size of a char: %lu byte(s)\n", b);
	printf("Size of a char: %lu byte(s)\n", c);
	printf("Size of a char: %lu byte(s)\n", d);
	printf("Size of a char: %lu byte(s)\n", e);
	return (0);
}
