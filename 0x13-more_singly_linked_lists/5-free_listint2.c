#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * @head: pointer to pointer listint_t
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}
