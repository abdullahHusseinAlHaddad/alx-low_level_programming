#include "function_pointers.h"

/**
 * array_iterator - Executes a function that given
 * @array: an array.
 * @size: size of array.
 * @action: A pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *and = array + size - 1;

	if (array && size && action)
		while (array <= and)
		action(*array++);
}
