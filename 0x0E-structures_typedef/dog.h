#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H*/
