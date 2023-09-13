#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: pointer to start of array
 * @size: number of elements inn array
 * @cmp: function pointer
 * Return: integer value.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
