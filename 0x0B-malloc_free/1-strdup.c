#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return pointer.
 * @str: A string.
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *dup;
	int x = 0, ln = 0;

	if (str == NULL)
		return (NULL);

	for (; str[ln] != '\0'; ln++)
		;
	dup = malloc(ln * sizeof(*str) + 1);
	if (dup == 0)
	{
		return (NULL);
	}
		else
	{
		for (x = 0; x < ln; x++)
			dup[x] = str[x];
	}
	return (dup);
}
