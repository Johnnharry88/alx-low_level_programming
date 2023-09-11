#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int alx = 0, sch = 0;

	while (alx <= 99)
	{
		for (sch = alx; sch <= 99; sch++)
		{
			if (sch != alx)
			{
				putchar(alx / 10 + 48);
				putchar(alx % 10 + 48);
				putchar(' ');
				putchar(sch / 10 + 48);
				putchar(sch % 10 + 48);

				if (alx * 100 + sch != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	alx = alx + 1;
	}
	putchar('\n');
	return (0);
}
