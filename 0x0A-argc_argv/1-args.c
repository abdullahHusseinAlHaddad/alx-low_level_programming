#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: The number of arguments.
 * @argv: An array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
