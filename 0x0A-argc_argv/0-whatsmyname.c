#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument Counter of integer type
 * @argv: String pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
