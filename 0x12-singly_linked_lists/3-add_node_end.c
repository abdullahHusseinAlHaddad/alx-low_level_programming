#include "lists.h"

/**
 * add_node_end - Adding new node at end of the list.
 * @head: A pointer.
 * @str: A string.
 * Return: the number of the size of the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *no = *head;

	if (!new || !head)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}
	if (no)
	{
		while (no->next)
			no = no->next;
		no->next = new;
	}
	else
		*head = new;
	return (new);
}
