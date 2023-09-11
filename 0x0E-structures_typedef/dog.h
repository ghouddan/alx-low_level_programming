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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcp(char *dest, char *src);
int _strlen(char *string);

#endif

