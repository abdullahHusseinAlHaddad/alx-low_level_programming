#include "main.h"

/**
 * _strpbrk - Searching.
 *
 * @s: The string.
 * @accept: The bytes.
 *
 * Return: a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, d;
	char *t;

	while (s[i] != '\0')
	{
		d = 0;
		while (accept[index] != '\0')
		{
			if (accept[index] == s[i])
			{
				t = &s[i];
				return (t);
			}
			d++;
		}
		i++;
	}

	return (0);
}
