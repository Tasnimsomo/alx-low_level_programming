#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t mid;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left < right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}
	return (-1);
}
