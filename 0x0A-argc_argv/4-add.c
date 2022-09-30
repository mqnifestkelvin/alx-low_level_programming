#include <stdio.h>
#include <stdlib.h>
/**
 * IsInteger - This program adds all the numbers passed by the arguement.
 *
 * @s: string to check.
 *
 * Return: 0 or 1
 */
int IsInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - This program adds all the numbers passed by the arguement.
 *
 * @argc: This is the count of the arguements passed.
 *
 * @argv: These are the arguements passed and summed.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (IsInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
