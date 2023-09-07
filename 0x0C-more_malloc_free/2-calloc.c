#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: byte size of each array.
 * Return: a pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *filler;
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
filler = ptr;
for (i = 0; i < (size * nmemb); i++)
filler[i] = '\0';
return (ptr);
}
