#include "lists.h"
/**
 * add_nodeint - add nodes to the top
 * @head: pointer.
 * @n: number
 * Return: node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw = malloc(sizeof(listint_t));

	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
