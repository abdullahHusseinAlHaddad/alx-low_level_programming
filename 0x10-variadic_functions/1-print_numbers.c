#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers then follow by a new line.
 * @separator: A string.
 * @n: A number.
 * @...: A variable.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int dex = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(numbers, n);
	while (dex--)
		printf("%d%s", va_arg(numbers, int),
				dex ? (separator ? separator : "") : "\n");
	va_end(numbers);
}
