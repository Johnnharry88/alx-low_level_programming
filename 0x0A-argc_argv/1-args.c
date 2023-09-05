#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument Counter of Integer Type
 * @argv: Chsaracter pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int alx = 0;
	for (argc = 1; *argv[alx] != '\0';argc++, alx++)
	{
		printf("%d", argc - 1);
	}
return (0);
}
