#include "lists.h"

/**
 * add_node - add new node at the beginning of the list.
 * @head: pointer to pointer of the head node.
 * @str: a string.
 * Return: the size of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
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
	new->next = *head;
	*head = new;
	return (new);
}
