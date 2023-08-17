#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - finds sum.
 *@a: character to test.
 *@b: character to test.
 *return: sum of a and b.
 */

int op_add(num1, num2 )
{
return num1 + num2;
}

/**
 *op_sub - finds difference
 *@a: character to test.
 *@b: character to test.
 *return : difference of a and b.
 */

int op_sub(num1 ,num2)
{
return num1 - num2;
}

/**
 *op_mul - finds multiplication
 *@a : character to test.
 *@b : character to test.
 *return - product of a and b.
 */

int op_mul(num1 , num2)
{
return num1 * num2;
}

/**
 *op_div - finds division.
 *@a : character to test.
 *@b : character to test.
 *return : division of a and b.
 */

int op_div(num1 , num2)
{
return num1 / num2;
}

/**
 *op_mod -returns the remainder of the division 
 *@a : character to test.
 *@b : character to test.
 *return : returns the remainder of the division .
 */

int op_mod(num1 , num2)
{
return num1 % num2;
}
