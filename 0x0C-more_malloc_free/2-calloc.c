#include "main.h"

/**
 * *_oset - fill memory.
 * @str: pointer.
 * @c: constant.
 * @by: bytes
 * Return: string.
 */

char *_oset(char *str, char c, unsigned int by)
{
	char *s = str;

	while (by--)
		*str++ = c;

	return (s);
}

/**
 * *_calloc - function allocates memory for an array.
 * @nmemb: elements.
 * @size: size.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *e;

	if (size == 0 || nmemb == 0)
		return (NULL);
	e = malloc(sizeof(int) * nmemb);
	if (e == NULL)
		return (NULL);
	_oset(e, 0, sizeof(int) * nmemb);
	return (e);
}
