#include "lists.h"
/**
 * free_listint_safe - Counts the number of unique nodes
 * @h: pointer to pointer
 * Return: nuber of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ln;
	int lop = 1;
	listint_t *next;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		lop = *h - (*h)->next;
		if (lop > 0)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
