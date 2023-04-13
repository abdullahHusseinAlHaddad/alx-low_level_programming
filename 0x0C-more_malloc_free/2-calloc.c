#include "main.h"

/**
 * *_calloc - function allocates memory for an array.
 * @nmemb: elements.
 * @size: size.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *e;
	unsigned int index;

	if (size == 0 || nmemb == 0)
		return (NULL);
	e = malloc(sizeof(int) * nmemb);

	if (e == 0)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		e[index] = '\0';
	return (e);
}
