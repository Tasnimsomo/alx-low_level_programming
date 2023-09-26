#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: head of list
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;
while (current != NULL)
{
if (current->str != NULL)
printf("[%d] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
count++;
current = current->next;
}
return (count);
}
