#include <stdio.h>
/**
 * main - This program prints the name of the program.
 *
 * @argc: This is the number of arguemennts passed in argv.
 *
 * @argv: This are the arguments passed its serves as a list
 * holding all the variables supplied.
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
