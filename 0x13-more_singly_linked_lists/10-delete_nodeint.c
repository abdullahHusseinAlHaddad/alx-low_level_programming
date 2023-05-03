#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list.
 * @head: pointer to pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pre;
	unsigned int j = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (j == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		j++;
		pre = node;
		node = node->next;
	}
	return (-1);
}
