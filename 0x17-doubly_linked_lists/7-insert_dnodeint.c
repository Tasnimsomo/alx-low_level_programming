#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: index of list
 * n: node to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int count = 0;

	if (*h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	current = *h;
	while (current != NULL)
	{
		if ((count + 1) == idx)
		{
			new_node->next = current->next;
			current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}



