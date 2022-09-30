#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two integers.
 *
 * @argc: This is the count of the number of arguments passed.
 *
 * @argv: This is the list of the arguemnts passed.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
