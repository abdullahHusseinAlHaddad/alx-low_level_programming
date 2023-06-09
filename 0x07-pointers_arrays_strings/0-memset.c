#include "main.h"

/**
 * *_memset - Fills the first n bytes of the memory.
 *
 * @s: A pointer to the memory.
 * @b: Constant.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
