#include "main.h"

/**
 * print_alphabet_10  - prints alphabets ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    char c ;
    int j ;
    for ( j = 0 ; j < 10 ; j++)
    {
        for(c = 'a' ; c <= 'z'; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }


}

