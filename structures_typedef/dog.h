#ifndef DOG_H
#define DOG_H
/**
 *struct dog- function a Structures, typedef
 *@name: variable typedef
 *@owner: variable typedef
 *@age: variable type def
 */
struct dog
{
	char *name, *owner;
	float age;

} dog;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
