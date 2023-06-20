#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * Define a new type struct dog with the following elements
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
