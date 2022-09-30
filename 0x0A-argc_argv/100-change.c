#include <stdio.h>
#include <stdlib.h>
/**
 * IsInteger - checks if s is an integer.
 *
 * @s: string to check.
 *
 * Return: 0
 */
int IsInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - A program that prints the minimum number of coin to make change
 * to make change for an amount of money.
 *
 * @argc: This is the count of arguement passed.
 *
 * @argv: This(These) is(are) the arguement(s) passed.
 *
 * Return: 0
 */
int main(int argc, char argv[])
{
	int i = 0, coinused = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (IsInteger(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinused++;
			}
			else
			{
				coin++;
			}
		}

	}
	printf("%d\n", coinused);
	return (0);
}
