#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums 2 integers
 * @a: integer 1
 * @b: integer 2
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of 2 integers
 * @a: int 1
 * @b: int 2
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: int 1
 * @b: int 2
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of 2 integers.
 * @a: int 1
 * @b: int 2
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(99);
}
return (a / b);
}

/**
 * op_mod - remainder of division a,b
 * @a: int 1
 * @b: int 2
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(99);
}
return (a % b);
}
