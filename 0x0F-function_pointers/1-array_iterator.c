#include <stdio.h>

/**
 * array_iterator - prints an integer
 * @action: function pointer
 *@size : size of array
 *@array : argument
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL && array != NULL )
{
for (i = 0; i < size ; i++)
{
action(array[i]);
}
}
}
