#include <stdio.h>

/**
 * array_iterator - iterate over the elements of the array
 * @array: pointer to start of array
 * @size: size of array.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action != NULL && array != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
