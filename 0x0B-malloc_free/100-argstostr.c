#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - fuction.
 * @ac: number.
 * @av: An array.
 * Return: new string.
 */
char *argstostr(int ac, char **av)
{
	char *st;
	int a = 0, xm = 0, k = 0, tp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; a < ac; a++, xm++)
		xm += _srtlen(av[a]);

	st = malloc(sizeof(char) * xm + 1);
		if (st == 0)
			return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (k = 0; av[a][k]; k++, tp++)
			st[tp] = av[a][k];
		st[tp] = '\n';
		tp++;
	}
	st[tp] = '\0';
	return (st);
}

/**
 * _srtlen - search about the length of string.
 * @string: string
 * Return: integer
 */

int _srtlen(char *string)
{
	int z = 0;

	for (; string[z] != '\0'; z++)
		;
	return (z);
}
