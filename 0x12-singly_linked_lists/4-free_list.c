#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer.
 */
void free_list(list_t *head)
{
	list_t *next;

	if (!head)
		return;
	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
