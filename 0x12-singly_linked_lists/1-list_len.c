#include "lists.h"

/**
 * list_len - function that returns the number of element
 * @h: head of list.
 * Return:  number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t count = 0;
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
