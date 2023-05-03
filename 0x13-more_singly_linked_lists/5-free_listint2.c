#include "lists.h"
/**
 * free_listint2 - free lists
 * @head: pontr to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (te)
	{
		te = (*head)->next;
		free(*head);
		*head = te;
	}
	*head = NULL;
}
