#include "main.h"

int sqrt(int m, int ro);

/**
 * sqrt - Find square root.
 * @m: The number.
 * @ro: The root.
 * Return: number.
 */

int sqrt(int m, int ro)
{
	if ((ro * ro) == m)
		return (ro);
	else if (ro * ro < m)
		return (sqrt(m, ro + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - search for natural square root.
 * @n: The number.
 * Return: number.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
