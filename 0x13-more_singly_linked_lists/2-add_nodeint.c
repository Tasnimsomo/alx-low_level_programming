#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@n: integer  
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = (listint_t *)malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
