#include "main.h"
/**
 * _atoi - program that converts strings to int
 * @s: Input string
 * Return : Interger value
 */
int _atoi(char *s)
{
	unsigned int rec, x, o, p, a, i;
	rec = 0;
	x = 0;
	o = 0;
	p = 1;
	a = 1;

	while(*(s + rec) != '\0')
	{
		if(x > 0 && (*(s + rec) < '0' || *(s + rec) > '9'))
		break;
		if ((*(s + rec) >= '0') && (*(s + rec) <= '9'))
		{
			if (x > 0)
			a *= 10;
		}
		rec++;
	}
	for (i = rec - x; i < rec; i++)
	{
		o = o + ((*(s + i) - 48) * a);
		a /= 10;
	}
	return (o * p);
}
