#include <stdio.h>

 /** main main function
   *
   *Return: Always 0.
  */

 void print_alphabet(void);

 int main(void)
 {
        print_alphabet();
        return (0);
 }
 
 
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
