#include "main.h"

/**
 * *malloc_checked - Allocates memory.
 * @b: number of bytes.
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *e = malloc(b);

	if (e == 0)
		exit(98);

	return (e);
}
