#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc- eallocates a memory block 
 *@ptr: pointer to the memory previously allocated
 *@old_size:size in bytes of allocated space for ptr
 *@new_size:new size, in bytes of the new memory block
 *Return:pointer to new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *result;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
result = malloc(new_size);
if (result == NULL)
return (NULL);
return (result);
}
result = malloc(new_size);
if (result == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
result[i] = ((char *)ptr)[i];
free(ptr);
return (result);
}
