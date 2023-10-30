#include "main.h"
/**
 * append_text_to_file - fucntion thet writes test at
 * the en of a file.
 * @filename: Name tag of a file.
 * @text_content: content of the file.
 * Return: 1 if successful otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int alx;
	int rec;
	int wrt;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (rec = 0; text_content[rec]; rec++)
			;
	alx = open(filename, O_WRONLY | O_APPEND);
	wrt = write(alx, text_content, rec);
	if (alx == -1 || wrt == -1)
		return (-1);
	close(alx);
	return (1);
}
