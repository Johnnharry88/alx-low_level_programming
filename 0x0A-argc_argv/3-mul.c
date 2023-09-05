#include "main.h"
/**
 * main - program that is to be executed
 * @argc: Argument of integer type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alx, school, mul = 1;

	for (alx = 1; alx < argc; alx++)
	{
		school = atoi(argv[alx]);
		mul = mul * school;
	}
	printf("%d\n", mul);
	return (0);
}
