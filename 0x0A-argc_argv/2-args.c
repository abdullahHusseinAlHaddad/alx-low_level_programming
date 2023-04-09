#include <stdio.h>

/**
 * main - Prints all arguments.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int ag;

	for (ag = 0; ag < argc; ag++)
		printf("%s\n", argv[ag]);
	return (0);
}
