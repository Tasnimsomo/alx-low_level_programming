#include "main.h"

/**
 * set_bit - sets value of a bit
 * @n: pointer
 * @index: index of bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;
if (index > 63)
{
return (-1);
}
i = 1 << index;
*n = (*n | i);
return (1);
}
