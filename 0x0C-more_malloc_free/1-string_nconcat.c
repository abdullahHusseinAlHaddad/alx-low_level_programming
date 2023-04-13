#include "main.h"

/**
 * *string_nconcat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number.
 * Return: pointer or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int p, g, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	cat = malloc(len1 + n + 1);
	if (cat == NULL)
		return (NULL);
	for (p = 0; s1[p] != '\0'; p++)
		cat[p] = s1[p];
	for (g = 0; g < n; g++)
	{
		cat[p] = s2[g];
		i++;
	}
	cat[i] = '\0';

	return (cat);
}
