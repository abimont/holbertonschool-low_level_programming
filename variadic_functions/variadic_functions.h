#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>

/**
 * struct print_all - prints anything
 * @arg: arguments
 * @f: pointer to the functions that prints anything
 */

typedef struct print_all
{
	char arg;
	void (*f)(va_list txt);
} type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list txt);
void print_i(va_list txt);
void print_f(va_list txt);
void print_s(va_list txt);

#endif
