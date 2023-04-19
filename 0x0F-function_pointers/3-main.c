#include "3-calc.h"

/**
 * main - check the code.
 * @argc: arguments.
 * @argv: An array of pointers.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int nm, nu, (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nm = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	nu = atoi(argv[3]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (!nu && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(nm, nu));
	return (0);
}
