#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
exit (98);
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
int result;
int (*op_func)(int, int);
if (argv[2][1] != '\0')
{
printf("Error\n");
return (99);
}
if (argv[2][0] == '+')
op_func = op_add;
else if (argv[2][0] == '-')
op_func = op_sub;
else if (argv[2][0] == '*')
op_func = op_mul;
else if (argv[2][0] == '/')
op_func = op_div;
else if (argv[2][0] == '%')
op_func = op_mod;
else
{
printf("Error\n");
exit (99);
}
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
