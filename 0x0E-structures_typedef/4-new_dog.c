#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *name2;
char *owner2;
int n, o, i, j;
struct dog *newDog;
newDog = malloc(sizeof(struct dog));
if (newDog == NULL)
return (NULL);
for (n = 0; *(name + n) != '\0'; n++)
;
for (o = 0; *(owner + o) != '\0'; o++)
;
name2 = malloc(n + 1);
if (name2 != NULL)
{
for (i = 0; i <= n; i++)
*(name2 + i) = *(name + i);
}
else
{
free(newDog);
return (NULL);
}
owner2 = malloc(o + 1);
if (owner2 != NULL)
{
for (j = 0; j <= o; j++)
*(owner2 + j) = *(owner + j);
}
else
{
free(name2);
free(newDog);
return (NULL);
}
newDog->name = name2;
newDog->age = age;
newDog->owner = owner2;
return (newDog);
}
