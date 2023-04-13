#include "main.h"

/**
 * *array_range - Creates an array of integers.
 * @min: first value of an array.
 * @max: last value of an array.
 *
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *ar, dex, ze;

	if (min > max)
		return (NULL);
	ze = max - min + 1;
	ar = malloc(sizeof(int) * ze);
	if (!ar)
		return (NULL);
	for (dex = 0; dex < ze; dex++)
		ar[dex] = min++;

	return (ar);
}
