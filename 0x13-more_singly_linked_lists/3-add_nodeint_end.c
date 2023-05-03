#include "lists.h"
/**
 * add_nodeint_end - add nodes to bottom
 * @head: pointer
 * @n: number
 * Return: new pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *nd;

	if (!head || !new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;
		nd->next = new;
	}
	return (new);
}
