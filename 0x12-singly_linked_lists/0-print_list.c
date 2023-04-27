#include "lists.h"

/**
 * _strl - to get length of the string.
 * @str: the string.
 * Return: number of string.
 */
int _strl(char *str)
{
	int count = 0;

	if (!str)
		return (0);
	while (*str++)
		count++;
	return (count);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: the number of string length
 */

size_t print_list(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("[%d] %s\n", _strl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		nod++;
	}
	return (nod);
}
