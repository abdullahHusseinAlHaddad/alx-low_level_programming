#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: The string number one.
 * @s2: The string number two.
 * Return: pointeer.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int n, dex, dex2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	dex = stln(s1);
	dex2 = stln(s2);
	str = malloc((dex + dex2) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (n = 0; n <= dex + dex2; n++)
	{
		if (n < dex)
			str[i] = s1[n];
		else
			str[n] = s2[n - dex];
	}
	str[n] = '\0';
	return (str);
}

/*
 * stln - length of string
 * @string: string
 * Return: integer
 */

int stln(char *string)
{
	int z;

	for (z = 0; string[z] != '\0'; z++)
		return (z);
}
