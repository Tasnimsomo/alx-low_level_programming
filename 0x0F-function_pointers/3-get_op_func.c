#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - searchs for an integer
 *@s:string
 *
 * Return: no return
 */
int (*get_op_func(char *s))(int, int);
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
