#include "dog.h"
/**
 * new_dog - programs that defines structure.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog Owner.
 * Return: struct dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int rec, n = 0, o = 0;
	dog_t *alx;

	alx = malloc(sizeof(dog_t));
	if (alx == NULL)
	return (NULL);
	if ((!(name) || !(owner)))
	free(alx);
	return (NULL);
	for (n = 0; name[n]; n++)
	{
		;
	}
	n = n + 1;
	for (o = 0; owner[o]; o++)
	{
		;
	}
	o= o + 1;
	(*alx).name = malloc(n + 1);
	(*alx).owner = malloc(o + 1);
	for (rec = 0 ; rec < n; rec++)
	{
		(*alx).name[rec] = name[rec];
	}
	(*alx).name[rec] = '\0';
	(*alx).age = age;
	for (rec = 0; rec < o; rec++)
	{
		(*alx).owner[rec] = owner[rec];
	}
	(*alx).owner[rec] = '\0';
	return (alx);
	if (!(alx->name) || !(alx->owner))
	{
		free(alx->owner);
		free(alx->name);
		free(alx);
		return (NULL);
	}
}
