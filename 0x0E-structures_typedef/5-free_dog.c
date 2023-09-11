#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the memory
 * @d : dtruct to free
 * return 0 on succes
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
