#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node to list at given position.
 * @head: pointer to pointer
 * @idx: the index
 * @n: value of node
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new = malloc(sizeof(listint_t)), *node;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (j == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		j++;
		node = node->next;
	}
	free(new);
	return (NULL);
}
