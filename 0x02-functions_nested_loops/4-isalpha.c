#include "main.h"
#include <stdio.h>

/**
  *int _isalpha - checks for alphabet characters.
  *
  *Returns 1 is alphabetic or 0 otherwise.
**/

int _isalpha(int c)
{
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
                return (1);
            else
                return (0);

}
