#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to pointer.
 * Return: pointer to head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}
	*head = node;
	return (*head);
}
