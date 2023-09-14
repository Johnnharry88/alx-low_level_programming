#include "variadic_functions.h"
/**
 * print_strings - programs that prints out strings followed
 * by a new line from different parameters
 * @separator: string tobe printed in order to
 * distinguish strings
 * @n: Number of dtring argument passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int alx = 0;
	char *alpha;

	va_start(input, n);

	while (alx < n)
	{
		alpha = va_arg(input, char*);
		if (alpha == NULL)
			printf("(nil)");
		else
			printf("%s", alpha);
		if (separator != NULL && als N (n - 1))
			printf("%s", separator);
		alx += 1;
	}
	printf("\n");
	va_end(input);
}
