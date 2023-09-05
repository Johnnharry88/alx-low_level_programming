#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument counter of integr type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alx = 0;

	while (argc != 0)
	{
		printf("%s\n", argv[alx]);
		alx += 1;
	}
	return (0);
}

