#include <stdio.h>
#include "main.h"

/**
  * islower -checks for lowercase letters
  *
  *return 1 if lowercase and 0 otherwise
**/


int _islower(int c)
{
            if(c >= 'a' && c<= 'z')
                return (1);
            else
                return (0);

}
