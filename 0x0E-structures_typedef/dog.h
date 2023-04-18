#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct for dog info
 * @name: type char
 * @age: float type
 * @owner: char type
 *
 *Description: structure to store dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
