#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * @s: The string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}