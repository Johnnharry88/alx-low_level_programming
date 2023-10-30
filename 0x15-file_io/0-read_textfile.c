#include "main.h"
/**
 * read_textfile - a program that reads a textfile and prints
 * it to standard output.
 * @filename: name tag of the file
 * @letters: the number of letter present in the file.
 * Return: Number of letter present in the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int alx;
	ssize_t old;
	ssize_t new;
	char *hold;

	if (filename == NULL)
		return (0);
	alx = open(filename, O_RDONLY);
	if (alx == -1)
		return (0);
	hold = malloc(sizeof(char *) * letters);
	old = read(alx, hold, letters);
	new = write(STDOUT_FILENO, hold, old);
	free(hold);
	close(alx);
	return (new);
}

