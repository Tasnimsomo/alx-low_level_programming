#include "dog.h"
#include "stdio.h"

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
else if(strcmp((*d).name,(*d).age,(*d).owner) == NULL)
{
printf("nil")
}
else
{
printf("Name: %s", (*d).name);
printf("\nAge: %f", (*d).age);
printf("\nOwner: %s", (*d).owner);
}
}
