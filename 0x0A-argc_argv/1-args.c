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

	while (*argv[alx] != '\0')
	{
		alx++;
		argc++;
	}
	printf("%d\n", argc);
	return (0);
}
