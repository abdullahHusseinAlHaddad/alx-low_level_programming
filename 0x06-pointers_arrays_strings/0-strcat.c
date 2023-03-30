#include "main.h"

/**
 * strcat - function that Concatenates
 *		two string.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index, dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
