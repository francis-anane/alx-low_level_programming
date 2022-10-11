/*
 * Author: Francis Ofori Anane
 * Date: 11/10/2022
 */

#include "dog.h"

/**
  * init_dog - initialize a variable of type dog

  * @d: The dog.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The dog's owner.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
