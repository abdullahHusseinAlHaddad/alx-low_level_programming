#include"main.h"

/**
 * print_alphabet_x10 - function that will print the a;phabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int lines, ch;

	for (lines = 0; lines <= 9; lines++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
