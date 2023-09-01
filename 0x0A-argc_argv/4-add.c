#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int total = 0;
int i;
int num;
if (argv > 1)
{
if (i = 1; i < argc; i++)
{
num = atoi(argv[i])
if (num != 0 || *argv[i] == '0')
{
total = total + num;
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d", total);
return (0);
}
