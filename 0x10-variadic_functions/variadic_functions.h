#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>

/**
 * struct printer - A new struct type defining a pointer.
 *
 * @symbol: A symbol representing a data type.
 *
 * @print: A function poniter to a function that prints
 * a data type similar to symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
