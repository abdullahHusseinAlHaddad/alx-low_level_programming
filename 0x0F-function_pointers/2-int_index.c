#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: an array.
 * @size: size of array.
 * @cmp: A pointer.
 * Return: -1 or 0 or the int index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int dex = 0;

	if (array && size && cmp)
		while (dex < size)
		{
			if (cmp(array[dex]))
				return (dex);
			dex++;
	}
	return (-1);
}
