#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct pritok - A new struct.
 * @smb: A symbol.
 * @func: A function.
 */
typedef struct pritok
{
	char *smb;
	void (*func)(va_list);

} pritok_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
