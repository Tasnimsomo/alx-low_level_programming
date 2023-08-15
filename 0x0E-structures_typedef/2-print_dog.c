#include "dog.h"
#include <stdio.h>

/**
 *print_dog-prints struct dog.
 *@d : structure.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if((*d).age == 0)
{
printf("nil");
}
else
{
printf("Age: %f\n", (*d).age);
}
if((*d).name == NULL)
{
printf("nil");
}
else
{
printf("Name: %s\n", (*d).name);
}
if((*d).owner == NULL)
{
printf("nil");
}
else
{
printf("Owner: %s\n", (*d).owner);
}
} 
