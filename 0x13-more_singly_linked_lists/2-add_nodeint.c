#include "lists.h"
/**
 * add_nodeint - check your code
 * @head: pointer.
 * @n: number.
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);
	w->n = n;
	w->next = *head;
	*head = w;
	return (w);
}
