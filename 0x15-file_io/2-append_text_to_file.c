#include "main.h"
/**
 * append_text_to_file -program that adds a test at the end of a file
 * @filename: pointer to file to be appended.
 * @text_content: file content.
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int alx;
	int let = 0;
	int wrt;

	if (filename == NULL)
		return (-1);
	alx = open(filename, O_WRONLY | O_APPEND);
	if (alx == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[let])
			let = let + 1;
		wrt = write(alx, text_content, let);
		if (wrt == -1)
			return (-1);
	}
	close(alx);
	return (1);
}
