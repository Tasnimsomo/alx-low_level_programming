#include <stdio.h>
#include <stdlib.h>
#include 3-calc.h

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf(Errorn);
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf(Errorn);
return (1);
}

result = op_func(num1, num2);
printf(%dn, result);

return (0);
}
