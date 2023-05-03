#include "lists.h"
/**
 * free_listint - free lists
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *nod;

	while (head)
	{
		nod = head->next;
		free(head);
		head = nod;
	}
}
