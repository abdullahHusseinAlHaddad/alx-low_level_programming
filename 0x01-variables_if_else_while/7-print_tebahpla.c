#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	char p;

	for (p = 'z'; p >= 'a'; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
