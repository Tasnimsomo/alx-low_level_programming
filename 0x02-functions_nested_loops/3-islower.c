#include <stdio.h>
#include "main.h"

/**
  *int _islower(int c) - checks for lowercase letters.
  *
  *Return: 1 if lowercase or 0 if otherwise.
**/

int _islower(int c)
{
            if(c >= 'a' && c<= 'z')
                return (1);
            else
                return (0);

	    
}

