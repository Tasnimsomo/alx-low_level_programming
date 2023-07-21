#include "main.h"

/**
 * isupper - checks if its uppercase
 *
 * Return: Always 0.
*/

 int isdigit(int c);
 int main(void)
 {
    char c = '4';
    printf("%c is %s a digit",c,isdigit(c)? "" : "not");
 }
 int _isdigit(int c)
 {
     if(c >= '0' && c<= '9')
         return (1);
     else
         return (0);
     
 }
