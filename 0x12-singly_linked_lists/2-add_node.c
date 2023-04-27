#include "lists.h"

/**
 * add_node - add new node at the beginning of the list.
 * @head: pointer to pointer of the head node.
 * @str: a string.
 * Return: the size of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	int ln;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (ln = 0; str[ln];)
		len++;

	new->len = ln;
	new->next = *head;
	*head = new;
	return (new);
}
