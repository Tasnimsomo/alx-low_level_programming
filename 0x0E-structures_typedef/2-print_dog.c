#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints all the data of a dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else if ((*d).name ==  NULL)
{
printf("Name: (nil)\n");
}
else if ((*d).owner ==  NULL)
{
printf("Owner: (nil)\n");  
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
}