#include <lists.h>

void __attribute__((constructor)) hare(void);

/**
 * _constructor - writes a string before the main
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
