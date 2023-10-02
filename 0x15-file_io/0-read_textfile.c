#include "main.h"
/**
 * real_testfile - reads a file in text format and prints letter
 * @filename: Name of file.
 * @letters: letter number printed.
 * Return: no of letter printed or 0.
 */
size_t real_testfile(const char *filename, size_t letters)
{
	int alx;
	size_t input, out;
	char *store;

	if (filename == NULL)
		return (0);
	alx = open(filename, O_RDONLY);
	if (alx == -1)
		return (0);
	store = malloc(sizeof(char) * (letters));
	if (!store)
		return (0);
	input = read(alx, store, letters);
	out = write(STDOUT_FILENO, store, input);
	close(alx);
	free(store);
	return (out);
}
