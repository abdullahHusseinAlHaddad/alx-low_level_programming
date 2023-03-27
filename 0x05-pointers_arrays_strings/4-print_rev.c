#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len--)
		_putchar(s[len]);	
	_putchar('\n');
}
