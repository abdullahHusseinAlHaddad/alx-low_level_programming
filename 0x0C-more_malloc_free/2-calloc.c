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
	char *fil;
	unsigned int index;

	if (size == 0 || nmemb == 0)
		return (NULL);
	e = malloc(size * nmemb);

	if (e == NULL)
		return (NULL);

	fil = e;
	for (index = 0; index < (size * nmemb); index++)
		fil[index] = '\0';
	return (e);
}
