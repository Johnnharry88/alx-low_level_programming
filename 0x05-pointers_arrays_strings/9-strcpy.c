#include "main.h"
/**
 * char *_strcpy -program that copies strings
 * @dest:file to copy to
 * @src: file to copy from
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int pie = 0;
	int phy = 0;

	while (*(src + pie) != '\0')
	{
		pie++;
	}
	for (phy = 0; phy < pie; phy++)
	{
		dest[phy] = src[phy];
	}
	dest[pie] = '\0';
return (dest);
}
