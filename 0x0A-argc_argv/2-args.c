#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments its receives.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
(void)argc;
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
