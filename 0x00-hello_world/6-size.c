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

	printf("Size of a char: %d byte(s)\n", (unsigned)a);
	printf("Size of a int: %d byte(s)\n", (unsigned)b);
	printf("Size of a long int: %d byte(s)\n", (unsigned)c);
	printf("Size of a long long: %d byte(s)\n", (unsigned)d);
	printf("Size of a float: %d byte(s)\n", (unsigned)e);
	return (0);
}
