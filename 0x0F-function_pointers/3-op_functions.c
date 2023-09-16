#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums 2 integers
 * @num1: integer 1
 * @num2: integer 2
 * Return: sum of 2 integers.
 */
int op_add(int num1, int num2)
{
return (num1 + num2);
}

/**
 * op_sub - difference of 2 integers
 * @num1: integer 1
 * @num2: integer 2
 * Return: difference
 */
int op_sub(int num1, int num2)
{
return (num1 - num2);
}

/**
 * op_mul - multiplies 2 integers
 * @num1: integer 1
 * @num2: integer 2
 * Return: product of 2 integers
 */
int op_mul(int num1, int num2)
{
return (num1 * num2);
}

/**
 * op_div - division of 2 integers.
 * @num1: int 1
 * @num2: int 2
 * Return: division of 2 integers
 */
int op_div(int num1, int num2)
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
return (num1 / num2);
}

/**
 * op_mod - remainder of division a,b
 * @num1: int 1
 * @num2: int 2
 * Return: remainder of division
 */
int op_mod(int num1, int num2)
{
if (num2 == 0)
{
printf("Error\n");
exit(100);
}
return (num1 % num2);
}
