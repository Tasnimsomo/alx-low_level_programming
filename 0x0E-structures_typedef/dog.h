#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores dog info.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};


dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
