#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, non-zero on error
 */
int main(int argc, char *argv[])
{
int (*op_func)(int, int);
int num1;
int num2;
int result;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
exit(99);
}
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
