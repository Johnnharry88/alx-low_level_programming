#include "dog.h"
/**
 * init_dog - function that initializes variable of struct type
 * @d: structure pointer
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of Dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
