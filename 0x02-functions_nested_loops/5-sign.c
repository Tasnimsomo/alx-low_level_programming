#include <stdio.h>
#include "main.h"

/**
  * print_sign - prints sign of number.
  * Return 1 if > than 0, 0 if 0 and -1 if less than 0.
**/

int print_sign(int n)
{
    if( n > 0)
    {
       _putchar('+');
        return (1);
    }

    else if (n < 0)
       {

        _putchar('-');
        return (0);
        }
    else
        {
           _ putchar('0');
            return (-1);
}

}
