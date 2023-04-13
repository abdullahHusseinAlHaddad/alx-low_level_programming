#include "main.h"

/**
 * *_oset - fill memory.
 * @s: pointer.
 * @c: constant.
 * @by: bytes
 * Return: string.
 */

char *_oset(char *s, char c, unsigned int by)
{
	char *str = s;

	while (by--)
		*str++ = c;

	return (str);
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
	if (e == 0)
		return (NULL);
	_oset(e, 0, sizeof(int) * nmemb);
	return (e);
}
