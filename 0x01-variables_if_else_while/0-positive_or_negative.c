#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A if condition program
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
