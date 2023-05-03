#include "lists.h"
/**
 * free_listint2 - free lists
 * @head: pontr to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *te, *nod;

	if (!head)
		return;

	nod = *head;
	while (nod)
	{
		te = nod;
		nod = nod->next;
		free(te);
	}
	*head = NULL;
}
