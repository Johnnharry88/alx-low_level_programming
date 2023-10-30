#include "main.h"
/**
 * check_error - program that checks whether file cna be opened.
 * @file_from: input file.
 * @file_to: coutput file.
 * @argv: vevtor for agrgument.
 * Return: void.
 */
void check_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - code checker
 * @argc: argument number
 * @argv: vector of argument.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_to;
	int file_from;
	int errorcheck;
	int alx;
	int wrt;
	char store[1024];

	if (argc < 3 || argc > 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
	check_error(file_from, file_to, argv);
	alx = 1024;
	while (alx == 1024)
	{
		alx = read(file_from, store, 1024);
		if (alx == -1)
			check_error(-1, 0, argv);
		wrt = write(file_to, store, alx);
		if (wrt == -1)
			check_error(0, -1, argv);
	}
	errorcheck = close(file_to);
	if (errorcheck == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
return (0);
}
