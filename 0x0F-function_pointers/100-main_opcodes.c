#include "function_pointers.h"

/**
 * main - check the code.
 * @argc: arguments.
 * @argv: array of pointers.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	char *po = (char *)main;
	int by;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (by--)
		printf("%02hhx%s", *po, by ? " " : "\n");
	return (0);
}
