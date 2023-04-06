#include "main.h"

/**
 * _sqrt_recursion - search for natural square root.
 * @n: The number is int var.
 * Return: number.
 */
int _sqrt_recursion(int n)
{
	return (sqoar(n, 1));
}

/**
 * sqoar - Find square root function this is description.
 * @m: The number is int this is a vareable.
 * @ro: The root done this a vareable tooo.
 * Return: number.
 */
int sqrt(int m, int ro);
int sqoar(int m, int ro)
{
	if (ro * ro == m)
		return (ro);
	else if (ro * ro < m)
		return (sqrt(m, ro + 1));
	else
		return (-1);
}


