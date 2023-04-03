#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: a string.
 * @accept: a prefix.
 *
 * Return: a number.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int oi, oi2;

	for (oi = 0; s[oi] != '\0'; oi++)
	{
		for (oi2 = 0; accept[oi2] != s[oi]; oi2++)
		{
			if (accept[oi] == '\0')
				return (oi);
		}
	}
	return (oi);
}
