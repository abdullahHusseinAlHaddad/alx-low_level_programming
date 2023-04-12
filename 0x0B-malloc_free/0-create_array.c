#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates an array of chars.
 * @size: The size of an array.
 * @c: The char.
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);

	if (size == 0 || ar == 0)
		return (0);

	while (size--)
		ar[size] = c;
	return (ar);
}
