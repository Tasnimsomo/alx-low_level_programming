include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

 int _isupper(int c);
 int main(void)
 {
     char c;
     c = 'a';

     return 0 ;


 }

 int _isupper(int c)
 {
        if (c >= 'A' && c <= 'Z')
        {
            return (1);
        }
        else
        {
            return (0);
        }
 }
