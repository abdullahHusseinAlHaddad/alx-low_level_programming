#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements.
 * @h: A pointer.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
