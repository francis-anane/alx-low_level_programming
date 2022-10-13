/*
 * Author: Francis Ofori Anane
 * Date: 11/10/2022
 */

#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - A function that frees dogs
  *
  * @d: The dog to be freed
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d != NULL)
		free(d);

	if ((*d).name != NULL)
		free((*d).name);

	if ((*d).owner != NULL)

		free((*d).owner);

}
