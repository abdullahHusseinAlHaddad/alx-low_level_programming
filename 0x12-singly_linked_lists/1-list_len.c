#include "lists.h"

/**
 * list_len - search for the length of linked list.
 * @h: pointer.
 * Return: the size of linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
