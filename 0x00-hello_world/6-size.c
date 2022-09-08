#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	a = sizeof(char);
	b = sizeof(int);
	c = sizeof(long int);
	d = sizeof(long long);
	e = sizeof(float);

	printf("Size of a char: %lu byte(s) \n", (unsigned long)(a));
	printf("Size of an int: %lu byte(s) \n", (unsigned long)(b));
	printf("Size of a long int: %lu byte(s) \n", (unsigned long)(c));
	printf("Size of a long long: %lu byte(s) \n", (unsigned long)(d));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)(e));
	return (0);
}
