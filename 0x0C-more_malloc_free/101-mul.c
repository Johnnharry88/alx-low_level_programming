#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * evalent - check for the length of a string
 * @beta: string to evaluate
 *
 * Return: string length
 */
int evalent(char *beta)
{
	int sch = 0;

	while (beta[sch] != '\0')
	{
		sch +=1;
	}
	return (sch);
}

/**
 * checkmate - program that checks for main errors 
 * Return: Nothing
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - outputs rsult of positive integer multiplication
 * @argc: Argument counter
 * @argv: Argument arrays
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *letter1, *letter2;
	int vi, vii, jhn, calc, num1, num2, *ans, hp = 0;

	letter1 = argv[1], letter2 = argv[2];
	if (argc != 3 || !digichk(letter1) || !digichk(letter2))
		errors();
	vi = evalent(letter1);
	vii = evalent(letter2);
	
	ans = malloc(sizeof(int) * (1 + vi + vii));
	if (!ans)
		return (1);
	for (jhn = 0; jhn <= vi + vii; jhn++)
		ans[jhn] = 0;
	for (vi = vi - 1; vi >= 0; vi--)
	{
		num1 = letter1[vi] - '0';
		calc = 0;
		for (vii = evalent(letter2) - 1; vii >= 0; vii--)
		{
			num2 = letter2[vii] - '0';
			calc += ans[vi + vii + 1] + (num1 * num2);
			ans[vi + vii + 1] = calc % 10;
			calc /= 10;
		}
		if (calc > 0)
			ans[vi + vii + 1] += calc;
	}
	for (jhn = 0; jhn < vi - 1; jhn++)
	{
		if (ans[jhn])
			hp = 1;
		if (hp)
			_putchar(ans[jhn] + '0');
	}
	if (!hp)
		_putchar('0');
	_putchar('\n');
	free(ans);
	return (0);
}



/**
 * digichk - program that checks for non digit c
 * @alpha: string to be evaluated
 *
 * Return: (0) or Integer 1
 */
int digichk(char *alpha)
{
	int alx = 0;

	while (alpha[alx])
	{
		if (alpha[alx] < '0' || alpha[alx] > '9')
			return (0);
		alpha++;
	}
	return (1);
}
