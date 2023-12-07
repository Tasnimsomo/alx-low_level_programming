#include "lists.h"

/**
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *last;

	current = head;
	while (current != NULL)
	{
		last = current->next;
		free(current);
		current = last;
	}
	head = NULL;
}
