#include "calc.h"
/**
 * op_add - program that adds two integer.
 * @a: first integer input
 * @b: Second integer input
 * Return: alx
 */
int op_add(int a, int b)
{
	int alx;

	alx = (a + b);
	return (alx);
}

/**
 * op_sub - program that estimates difference of two intger
 * @a: First integer input
 * @b: Second integer input
 * Return: alx
 */
int op_sub(int a, int b)
{
	int alx;

	alx = (a - b);
	return (alx);
}

/**
 * op_div - program that performs division on two integer
 * @a: First integer input
 * @b: Second integer input
 * Return: alx
 */
int op_div(int a, int b)
{
	int alx;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	alx = (a / b);
	return (alx);
}
/**
 * op_mod - program that ouputs remainder
 * @a: first integer input
 * @b: second integer input
 * Return: alx
 */
int op_mod(int a, int b)
{
	int alx;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	alx = (a % b);
	return (alx);
}

/**
 * op_mul -program that prints the product of input integer
 * @a: First integer input
 * @b: Second integer input
 * Return: alx
 */
int op_mul(int a, int b)
{
	int alx;

	alx = (a * b);
	return (alx);
}

