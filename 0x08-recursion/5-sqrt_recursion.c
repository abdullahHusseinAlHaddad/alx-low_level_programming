#include "main.h"

/**
 * _sqrt_recursion - search for natural square root.
 * @n: The number is int var.
 * @ro: The root.
 * Return: number.
 */
int sqoar(int n, int ro);
int _sqrt_recursion(int n)
{
	return (sqoar(n, 1));
}

/**
 * sqoar - Find square root function this is description.
 * @n: The number is int this is a vareable.
 * @ro: The root done this a vareable tooo.
 * Return: number.
 */
int sqoar(int n, int ro)
{
	if (ro * ro == n)
		return (ro);
	else if (ro * ro < n)
		return (sqrt(n, ro + 1));
	else
		return (-1);
}


