#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
#include "3-get-op-func.c"

/**

main - program entry point
@argc: argument count
@argv: argument vector
Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int a, b, res;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}

f = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
return (99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
return (100);
}

res = f(a, b);
printf("%d\n", res);

return (0);
}
