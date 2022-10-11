#ifndef DOG_H
#define DOG_H

/*
 * Author: Francis Ofori Anane
 * Date: 11/10/2022
 */

/**
  * struct dog - Information of a dog.
  *
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The dog's owner.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
