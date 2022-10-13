#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers.
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the multiplication of two numbers
 *
 * @a: The first number.
 *
 * @b: The second number.
 *
 * Return: The multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 *
 * @a: The first number.
 *
 * @b: The second number
 *
 * Return: The division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns The remainder of be division of one number by another.
 *
 * @a: The first number.
 *
 * @b: The secondn number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
