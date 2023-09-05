#include "main.h"

/**
 * create_array - creates an array of characters.
 * @size: argument 1.
 * @c: character to be initialized.
 * Return: array of chars.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return NULL;
}
char *array = (char *)malloc(size *sizeof(char));
if (array == NULL)
{
return NULL;
}
else
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
return array;
}
