#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument counter of integr type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int  alx;

	for (alx = 0; alx < argc; alx++)
	{
		printf("%s\n", argv[alx]);
	}
	return (0);
}

