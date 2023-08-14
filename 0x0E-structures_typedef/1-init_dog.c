#include "main.h"
#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function that initializes variable of a type.
 *struct dog - struct called dog.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
