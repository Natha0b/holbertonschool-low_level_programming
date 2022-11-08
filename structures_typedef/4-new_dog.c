#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 **new_dog- initialize a variable
 *@name: variable name
 *@age: variable age
 *@owner: variable owner
 *Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lowner, lname, i, j;
	dog_t *newdog;

		newdog = malloc(sizeof(dog_t));
		if (newdog == NULL)
		{
			return (NULL);
		}
		lname = strlen(name);
		lowner = strlen(owner);

		newdog->name = malloc(lname + 1);
		newdog->owner = malloc(lowner + 1);
		if (newdog->name == NULL || newdog->owner == NULL)
		{
			free(newdog);
			free(newdog->name);
			free(newdog->owner);
			return (NULL);
		}
		for (i = 0; i < lname + 1; i++)
		{
			newdog->name[i] = name[i];
		}
		newdog->age = age;

		for (j = 0; j < lowner + 1; j++)
		{
			newdog->owner[j] = owner[j];
		}
		return (newdog);
}
