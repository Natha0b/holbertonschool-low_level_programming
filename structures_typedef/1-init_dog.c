#include <stdio.h>
#include "dog.h"

/**
 *init_dog- initialize a variable
 *@d: variable dog
 *@name: variable name
 *@age: variable age
 *@owner: variable owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(d)->age = age;
		(d)->name = name;
		(d)->owner = owner;
	}
}
