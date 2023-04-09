#include "main.h"

/**
 * *_strchr - Locates a character.
 *
 * @s: string.
 * @c: character.
 *
 * Return: a pointer.
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return ('\0');
}
