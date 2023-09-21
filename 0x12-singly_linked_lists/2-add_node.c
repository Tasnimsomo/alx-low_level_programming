#include "lists.h"

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
  newNode->data = strdup(str);
  if (newNode->data == NULL)
    {
      free(newNode);
    }
  newNode->next = *head;
  *head = newNode;
  return (newNode);
}
