#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: integer to test.
 * Return: nothing.
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
