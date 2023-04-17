#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog.
 * @d: dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->owner);
		if (d->owner)
			free(d->name);
		free(d);
	}
}
