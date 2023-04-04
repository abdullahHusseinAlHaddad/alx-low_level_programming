#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description.
 * @a: array of integers.
 * @size: The size of array.
 */
void print_diagsums(int *a, int size)
{
	int e, m1 = 0, m2 = 0;

	for (e = 0; e < size; e++)
	{
		m1 += a[e];
		m2 += a[size - e - 1];
		a += size;
	}
	printf("%d, ", m1);
	printf("%d\n", m2);
}
