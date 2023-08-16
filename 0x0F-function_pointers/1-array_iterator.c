#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - prints an integer
 * @action: function pointer
 *@array : argument
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action != NULL)
for (i = 0; i < size ; i++)
{
action(array[i]);
}
