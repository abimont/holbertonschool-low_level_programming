#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list str;

	va_start(str, n);
	string = 0;

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (!string)
			string = "(nil)";

		if (i == n - 1)
			separator = "";

		printf("%s%s", string, separator);
	}
	printf("\n");

	va_end(str);
}
