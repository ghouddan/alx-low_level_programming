#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function to calculate the size
 * @string : string to determin the lent of
 * return int 
 */
int _strlen(char *string)
{
	int i = 0;
	while (string)
		i++;
	return (i);
}
/**
 * _strcp - function to copy
 * @src : source
 * @dest : destination
 * return string
 */
char * _strcp(char *src, char *dest)
{
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - function to creat new dog
 * @name : gog's name
 * @age : dog's age
 * @owner : dog's owner
 * return struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if(new_dog == NULL)
	        return (NULL);
	new_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcp(new_dog->name, name);
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcp(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

