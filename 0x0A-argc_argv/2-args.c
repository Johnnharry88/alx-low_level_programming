#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument counter of integr type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{	int  i = 1;

	while (argc >= 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

