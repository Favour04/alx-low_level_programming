#include "dog.h"
/**
 * new_dog - function to create new dog
 * @name: name of dog
 * @age: dogs age:
 * @owner: owner name
 *
 * Return: Pointer to the dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->owner = owner;
	dog->age = age;

	return (dog);
}

