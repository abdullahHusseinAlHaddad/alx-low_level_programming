#include "lists.h"
/**
 * add_nodeint - add nodes to the top
 * @head: pointer.
 * @n: number
 * Return: node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->next = NULL;
	new->n = *n;
	if(*head)
		new->next = *head;
	*head = new;
	return (new);
}
