#include <stdio.h>
#include "main.h"

/**
  * void jack_bauer(void) - prints every minute of the day of Jack Bauer.
  *
  *
  *Return : every minute of day of Jack Bauer.
  */

void jack_bauer(void)
{
    for (int hour = 0 ; hour <= 24 ; hour++)
    {
        for (int minute = 0 ; minute <= 60 ; minute ++)
        {
             printf("%02d:%02d\n", hour, minute);
        }
    }
}
