#include "lists.h"
/**
 * sum_listint - Calculates the sum of all the data
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
