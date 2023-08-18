#include <stdio.h>
#include<stdlib.h>

/**
 * int_index - checks for an integer
 * @array: array
 * @size : size of arra
 * @cmp : function pointer
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, count;
count = 0;
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
count++;
return (i);
}
}
}
if (size <= 0 || count == 0)
{
return (-1);
}
else
{
return (0);
}
} 
