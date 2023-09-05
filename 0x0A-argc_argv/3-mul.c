#include "main.h"
/**
 * main - program that is to be executed
 * @argc: Argument of integer type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alx = 1, school, mul = 1;

	if (alx > 0)
	{	for (alx = 1; alx < argc; alx++)
		{
			school = atoi(argv[alx]);
			mul = mul * school;
			alx++;
		}
	printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
