#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a : character to check.
 * @b : character to check.
 * swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
