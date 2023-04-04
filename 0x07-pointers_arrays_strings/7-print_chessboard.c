#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: the chessoard rows.
 *
 * Return: NOTHING.
 */
void print_chessboard(char (*a)[8])
{
	int x1, x2;

	for (x1 = 0; x1 < 8; x1++)
	{
		for (x2 = 0; x2 < 8; x2++)
		{
			_putchar(a[x1][x2]);
		}
			_putchar('\n');
	}
}
