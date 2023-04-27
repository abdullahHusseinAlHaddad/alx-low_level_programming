#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - writes a string before the main
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
