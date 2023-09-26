#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *current;
listint_t **temp = head;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
current = *head;
free(current);
*head = (*head)->next;
}

*head = NULL;
}
}
