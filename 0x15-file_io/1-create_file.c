#include "main.h"
/**
 * create_file - a program that creates a new file
 * @filename: pointer to file.
 * @text_content: file content.
 * Return: 1 0r -1.
 */
int create_file(const char *filename, char *text_content)
{
	int alx = 0;
	int f;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (alx = 0; text_content[alx] != '\0'; alx++)
	{
		;
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f  == -1)
		return (-1);
	write(f, text_content, alx);
	return (1);
}

