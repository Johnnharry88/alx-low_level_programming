#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure name
 * @name: Dog's name holder of data type char
 * @age: Age of dog holder of float type
 * @owner: Dog owner holder of data type char
 * Return: void
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
