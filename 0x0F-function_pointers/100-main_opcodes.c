#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that outputs opcodes toa standard output
 * @argc: Argument Counter
 * @argv: Argument vector
 * Return: (0) Success.
 */
int main(int argc, char *argv[])
{
	char *sol = (char *) main;
	int alx, byt;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[argc - 1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (alx < byt)
	{
		printf("%02hhx", sol[alx]);
		if (alx != byt - 1)
			printf(" ");
	alx = alx + 1;
	}
	printf("\n");
	return (0);
}
