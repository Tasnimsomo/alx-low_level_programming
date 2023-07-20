#include<stdio.h>

/** main - function that prints alphabets in lowercase
  *
 */

void print_alphabet(void)
{
        int i;
        for (i = 'a' ; i <= 'z' ; i++)
        {
           putchar(i); 
        }
        putchar('/n'); 
        
}
        
        
        
/** main - the main main function
  *
  *Return: Always 0.
 */
  
 int main(void)
{
    print_alphabet();
    return (0);
 }
