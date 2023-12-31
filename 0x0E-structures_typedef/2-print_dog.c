#include "dog.h"
/**
 * print_dog - program that outputs a struct to a standad output
 * @d: struct dog.
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
		{
			printf("Name: (nil)\n");
		}
		if ((*d).name)
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if (!((*d).owner))
		{
			printf("Owner: (nil)\n");
		}
		if ((*d).owner)
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
