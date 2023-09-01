#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
(void)argc;
if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
else
{
printf("Error");
return (1);
}
return (0);
}
