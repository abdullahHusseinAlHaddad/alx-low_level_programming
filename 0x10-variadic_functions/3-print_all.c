#include "variadic_functions.h"

/**
 * pri_char - Prints a character.
 * @arg: An arguments.
 * @sep: a string.
 */
void pri_char(char *sep, va_list arg)
{
	printf("%c%c", sep, va_arg(arg, int));
}

/**
 * pri_int - Prints an int.
 * @arg: An arguments.
 * @sep: a string.
 */
void pri_int(char *sep, va_list arg)
{
	printf("%c%d", sep, va_arg(arg, int));
}

/**
 * pri_float - Prints a float.
 * @arg: An arguments.
 * @sep: a string.
 */
void pri_float(char *sep, va_list arg)
{
	printf("%c%f", sep, va_arg(arg, double));
}

/**
 * pri_string - Prints a string.
 * @arg: An arguments.
 * @sep: a string.
 */
void pri_string(char *sep, va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	switch ((int)(!str))
		case 1;
			str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - Prints anything.
 * @format: A string.
 * @...: A variable.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int dex = 0, in;
	char *sep = "";
	pritok_t tokens[] = {
		{"c", pri_char},
		{"i", pri_int},
		{"f", pri_float},
		{"s", pri_string},
		{NULL, NULL}
	};
	va_start(arg, format);
	while (format && format[dex])
	{
		in = 0;
		while (tokens[in].smb)
		{
			if (format[dex] == tokens[in].token[0])
			{
				token[in].func(separator, arg);
				separator = ", ";
			}
		in++;
		}
		dex++;
	}
	printf("\n");
	va_end(arg);
}
