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
	for (dex = 0; dex < n; dex++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (dex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
