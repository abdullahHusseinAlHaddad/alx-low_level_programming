#include "variadic_functions.h"

/**
 * sum_them_all - sum paramters.
 * @n: number.
 * @...: A variable.
 * Return: the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	int dex = n, sum = 0;

	if (!n)
		return (0);
	va_start(number, n);
	while (dex--)
		sum += va_arg(nums, int);
	va_end(number);
	return (sum);
}
