#include "dog.h"
/**
 * init_dog - discription of the function.
 * @d : struct
 * @name : strunct.name
 * @owner:struct.owner
 * @age : struct.age
 * Return: A pointer to the newly created array.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
