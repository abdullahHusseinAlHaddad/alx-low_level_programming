#include "lists.h"
/**
 * pop_listint - pop head
 * @head: pointer to pointer
 * Return: number
 */
int pop_listint(listint_t **head)
{
	listint_t *teno;
	int number;

	if (!*head || !head)
		return (0);
	number = (*head)->n;
	teno = (*head)->next;
	free(*head);
	*head = teno;
	return (number);
}
