#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
list_t *newNode = (list_t*)malloc(sizeof(list_t));
size_t len = 0;
if (str == NULL)
{
return (NULL);
}
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}
for (len = 0; str[len];)
{
len++;
}
newNode->next = *head;
*head = newNode;
return (newNode);
}
