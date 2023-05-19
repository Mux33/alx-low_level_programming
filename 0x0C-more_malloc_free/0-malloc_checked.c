#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b - the number of bytes to be allocated
 * Return: a pointer to the allocated memory
 * if malloc fails process terminates with a value of 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit (98);
	return (p);
}
