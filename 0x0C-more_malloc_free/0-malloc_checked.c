#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 *malloc_checked - allocates memory.
 *@b - character to test
 *Return void pointer.
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

 
