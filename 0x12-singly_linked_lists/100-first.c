#include <stdio.h>
#include "lists.h"

void front_main(void)__attribute__((constructor));
/**
 * front_main - a function that prnts a string  before main.
 * function execution
 * Retiurn: void.
 */
void front_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
