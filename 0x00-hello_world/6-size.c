#include <stdio>
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

	printf("Size of a char: %lu byte(s)", a);
	printf("Size of a char: %lu byte(s)", b);
	printf("Size of a char: %lu byte(s)", c);
	printf("Size of a char: %lu byte(s)", d);
	printf("Size of a char: %lu byte(s)", e);
	return (0);
}
