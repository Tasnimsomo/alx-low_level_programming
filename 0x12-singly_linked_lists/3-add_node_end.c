#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/
list_t *add_node_end(list_t **head, const char *str)
{
size_t len = 0;
list_t *newNode = (list_t*)malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
if (str == NULL)
{
free(newNode);
return (NULL);
}
newNode->str = strdup(str);
for (len = 0; str[len]; len++)
{
}
newNode->len = len;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
list_t *current = *head;
/* Traverse the list until the last node*/
while (current->next != NULL)
{
current = current->next;
}
/* Add the new node after the last node*/
current->next = newNode;
}
/* Return the address of the new node*/
return (newNode);
}
