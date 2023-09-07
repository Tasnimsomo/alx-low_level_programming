#include "main.h"
#include <string.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: byte size of each array.
 * Return: a pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);
void *ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
