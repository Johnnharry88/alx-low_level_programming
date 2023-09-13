#include "3-calc.h"
/**
 * main - program that computes two digit integer
 * @argc: counts argument
 * @argv: argument vector
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alpha, beta, ans;

	int (*rit_sym)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	alpha = atoi(argv[2 - 1]);
	beta = atoi(argv[2 + 1]);
	if (argv[2][1])
	{
		printf("Error\n");
		exit(100);
	}
	rit_sym = get_op_func(argv[2]);

	if (rit_sym == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = rit_sym(alpha, beta);
	printf("%d\n", ans);
	return (0);
}
