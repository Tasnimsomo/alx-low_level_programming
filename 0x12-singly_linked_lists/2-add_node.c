#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
{
return (NULL);
}
list_t *newNode = (list_t*)malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
}
newNode->next = *head;
*head = newNode;
return (newNode);
}
