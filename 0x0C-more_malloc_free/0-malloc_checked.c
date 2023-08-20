#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *malloc_checked- allocates memory.
 *@b : size of memory to be allocated
 *Return void pointer if successful and exit(98) if fails.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

 
