#include "main.h"
/**
 * create_file - A function that creates a file.
 * @filename: Name tag on file.
 * @text_content: File contents.
 * Return: 1 if successful or else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int action, rec;
	int output;

	if (filename == NULL || text_content == NULL)
		return (-1);
	action = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	
	if (text_content != NULL)
	{
		for (rec = 0; text_content[rec]; rec++)
		{
			;
		}
		output = write(action, text_content, rec);
		if (output == -1 || rec == -1)
			return (-1);
	}
	close(action);
	return (1);
}
