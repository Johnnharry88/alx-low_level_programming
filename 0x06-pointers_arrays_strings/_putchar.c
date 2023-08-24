#include "main.h"
#include <unistd.h>

/**
* _putchar - writes to standard output
* @c: input character
* Return: On Success 1
* On error: error is set appropriate and -1 is sreturned
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
