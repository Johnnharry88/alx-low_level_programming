#include "main.h"
/**
 * main -program to be executed
 * @argc: Argument Counter of Integer Type
 * @argv: Chsaracter pointer
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	for (argc = 0; *argv[argc - 1] == '\0'; argc++)
	{
		printf("%d", argc);
	}
return (0);
}
