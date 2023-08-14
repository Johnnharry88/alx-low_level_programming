#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Prints last digit of numbers generated randomly
 * and selecting numbers greater than five, less than 0
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n % 10) > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 5) < 6 && (n % 10) != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
