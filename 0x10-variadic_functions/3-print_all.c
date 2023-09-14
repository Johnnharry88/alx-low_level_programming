#include "variadic_functions.h"
/**
 * print_all - programs that prints all strings
 * @format: lsit of type of arguments
 * Return: void.
 */
void print_all(const char *const format, ...)
{
	char *alpha, *div = "";
	va_list items;
	int alx = 0;

	va_start(items, format);
	if (format)
	{
		while (format[alx])
		{
			switch (format[alx])
			{
				case '1':
					printf("%s%d", div, va_arg(items, int));
					break;
				case 'c':
					printf("%s%c", div,  va_arg(items, int));
					break;
				case 'f':
					printf("%s%f", div, va_arg(items, double));
					break;
				case 's':
					alpha = va_arg(items, char*);
					if (!alpha)
					{
						printf("(nil)");
						break;
					}
					printf("%s%s", div, alpha);
					break;
				default:
					alx = alx + 1;
					continue;
			}
			div = ", ";
			alx = alx + 1;
		}
	}
printf("\n");
va_end(items);
}
