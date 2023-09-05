#include "main.h"
/**
 * main - program that is to be executed
 * @argc: Argument of integer type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alx1, alx2, final;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		alx1 = atoi(argv[argc - 2]);
		alx2 = atoi(argv[argc - 1]);
		final = alx1 * alx2;
		printf("%d\n", final);
	}
return (0);
}
