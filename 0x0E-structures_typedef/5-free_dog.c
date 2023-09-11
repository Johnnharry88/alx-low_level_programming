#include "dog.h"
/**
 *free_dog - program that frees memory allocated to struct
 *@d:struct dog
 *Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
