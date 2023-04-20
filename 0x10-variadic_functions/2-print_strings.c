#include "variadic_functions.h"

/**
 * print_strings - Prints strings then follow by a new line.
 * @separator: A string.
 * @n: A number.
 * @...: A variable.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *string;
	int dex;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(str, n);
	while (dex--)
		printf("%s%s", (string = va_arg(str, char *)) ? string : "(nil)",
				dex ? (separator ? separator : "") : "\n");
	va_end(str);
}
