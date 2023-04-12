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
	ze = stln(s1);
	ze1 = stln(s2);
	str = malloc((ze + ze1) * sizeof(char) + 1);
	if (concat_str == NULL)
		return (NULL);
	for (n = 0; n <= ze + ze1; n++)
	{
		if (n < ze)
			str[i] = s1[n];
		else
			str[n] = s2[n - ze];
	}
	str[i] = '\0';
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
