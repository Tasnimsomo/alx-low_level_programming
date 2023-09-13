#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
printf(Error\n);
exit (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
result = get_op_func(argv[2])(num1, num2);
printf("%d\n", result);
return 0;
}
