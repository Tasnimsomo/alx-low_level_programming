#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *h;
listint_t *current;
if (*head == NULL)
return (0);
current = *head;
data = current->n;
h = current->next;
free(current);
*head = h;
return (data);
}
