#include <stdio.h>

/**
 * print_putchar - prints the string "_putchar\n" to the console
 */
void print_putchar(void)
{
    putchar('_');
    putchar('p');
    putchar('u');
    putchar('t');
    putchar('c');
    putchar('h');
    putchar('a');
    putchar('r');
    putchar('\n');
}

/**
 * main - the entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
    print_putchar();

    return (0);
}
