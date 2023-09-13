#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the corresponding function, or NULL if no match
 */
int (*get_op_func(char *s))(int, int)
{
int i;
ops_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s && *(s + 1) == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
