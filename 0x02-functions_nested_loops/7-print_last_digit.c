#include <stdio.h>
#include "main.h"

/**
  *print_last_digit - prints last digit of a number.
  *
  * Returns value of last digit.
**/

int print_last_digit(int n)
{
            int last_digit = n % 10;
            if (last_digit < 0 )
                last_digit *= -1;
            putchar(last_digit + '0');
            return (last_digit);
}
