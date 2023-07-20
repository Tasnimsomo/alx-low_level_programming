#include <stdio.h>

/**
  *void print_alphabet - function for printing alphabets
 */

 void print_alphabet(void)
 {
        int i;
        for ( i = 'a' ; i <= 'z'; i++)
        {
            putchar(i);
        }

        putchar('\n');

 }

 /** main main function
   *
   *Return: Always 0.
  */

 int main(void)
 {
        print_alphabet();
        return (0);
 }
