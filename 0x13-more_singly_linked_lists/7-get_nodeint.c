#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: pointer
 * @index: number
 * Return: number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *te;
	unsigned int in = 0;

	for (te = head, in = 0; te && in < index; te = te->next, in++)
		;
	return (te);
}
