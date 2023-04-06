#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if the number is prime.
 * @n: The number vareble.
 * @iv: int.
 * Return: number.
 */
int check(int n, int iv);
int is_prime_number(int n)
{
	return (check(n, 2));
}


/**
 * check- Checks if a number is even.
 * @iv: divisor.
 * @n: The number.
 * Return: number.
 */
int check(int n, int iv)
{
	if (iv >= n && n > 1)
		return (1);

	else if (n % iv == 0 || n <= 1)
		return (0);

	return (check(n, iv + 1));
}
