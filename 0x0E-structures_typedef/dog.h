#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This structure represents a dog, including its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This function initializes a dog structure with provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

