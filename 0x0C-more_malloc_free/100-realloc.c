#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc- eallocates a memory block 
 *@ptr: pointer to the memory previously allocated
 *@old_size:is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
void *new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
}
unsigned int min_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);
free(ptr);
return (new_ptr);
}
