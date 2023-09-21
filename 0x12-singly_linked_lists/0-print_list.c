#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
if (h == NULL) 
{
printf("[0] (nil)\n");
return (0);
}
const list_t *current = h;
printf("[");
while(current != NULL)
{
printf("%d", current->data);
current = current->next;
}
printf("]\n");
}
