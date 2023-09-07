#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: 1st value of array
 * @max:  last value of array.
 * Return: a pointer to new array.
 */
int *array_range(int min, int max)
if (min > max)
return (NULL);
int *arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
for (int i = 0; i <= max - min; i++) {
arr[i] = min + i;
}
return (arr);
}  
