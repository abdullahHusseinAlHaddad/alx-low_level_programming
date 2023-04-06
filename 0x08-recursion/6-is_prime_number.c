#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if the number is prime.
 * @n: The number.
 * @iv: int.
 * @m: a number.
 * Return: number.
 */
int check(int m, int iv);
int is_prime_number(int n)
{
	return (check(n, 2));
}


/**
 * check- Checks if a number is even.
 * @m: The number to be checked.
 * @iv: divisor.
 *
 * Return: number.
 */
int check(int m, int iv)
{
	if (iv >= m && m > 1)
		return (1);

	else if (m % iv == 0 || m <= 1)
		return (0);

	return (check(m, iv + 1));
}
