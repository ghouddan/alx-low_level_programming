#include "dog.h"
/**
 * init_dog - discription of the function.
 * @d : struct
 * @name : strunct_name
 * @age : struct_age
 * @owner:struct_owner
 * Return: A pointer to the newly created array.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
}
