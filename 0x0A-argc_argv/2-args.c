#include <stdio.h>
/**
 * main - This program returns all the arguements passed.
 *
 * @argc: This is the count the number of the arguement passed.
 *
 * @argv: This is a string of array of the arguments passed.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

}
