/*
 **File: 0-positive_or_negative.c
 **Auth: wale
 */

#include <time.h>

#include <stdlib.h>

#include <stdio.h>

/**
**main -prints a randomnumberand states whether
**it is positive, negative or zero
**Return: Always 0
*/

int main(void)

{
	int n;

	srand(time(o));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("%d is positive\n", n);
	else if (n < 0)

		printf("%d is negative\n", n);
	else

		printf("%d is zero\n", n);

	return (0);
}
