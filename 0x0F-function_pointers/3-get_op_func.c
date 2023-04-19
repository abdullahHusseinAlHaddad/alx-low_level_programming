#include "3-calc.h"

/**
 * get_op_func - Selects the correct function.
 * @s: The operator.
 * Return: A pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int q = 0;

	while (q < 5)
	{
		if (s && s[0] == ops[q].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
