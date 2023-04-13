#include "main.h"

/**
 * *_realloc - Reallocates a memory.
 * @ptr: pointer.
 * @old_size: size in bytes.
 * @new_size: The size in bytes.
 * Return: ptr or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *me;
	unsigned int in;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		me = malloc(new_size);

		if (me == NULL)
			return (NULL);
		return (me);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		me = malloc(new_size);
		if (me == NULL)
			return (NULL);
		for (in = 0; in < old_size && in < new_size; in++)
			*((char *)ptr + in) = *((char *)ptr + in);
		free(ptr);
	}
	return (me);
}
