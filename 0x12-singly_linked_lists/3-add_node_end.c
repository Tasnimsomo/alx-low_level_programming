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
list_t *add_node(list_t **head, const char *str)
{
/* Allocate memory for a new node*/
list_t *newNode = (list_t*)malloc(sizeof(list_t));
size_t len = 0;
if (newNode == NULL)
{
/* Memory allocation failed*/
return (NULL);
}
if (str == NULL)
{
/* Invalid input string*/
free(newNode);
return (NULL);
}
/* Duplicate the input string*/
newNode->str = strdup(str);
/* Count the length of the string*/
for (len = 0; str[len]; len++)
{
/* Loop to count the length of the string*/
}
/* Set the length of the string in the new node*/
newNode->len = len;
/* Set the next pointer of the new node to NULL*/
newNode->next = NULL;
/* If the list is empty, set the new node as the head*/
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
