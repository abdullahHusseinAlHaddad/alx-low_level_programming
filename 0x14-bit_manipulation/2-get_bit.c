#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: A number.
 * @index: The index to get the value.
 * Return: 1 or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	return (n >> index & 1);
}
