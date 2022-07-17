#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int value;
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	value = 0;

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		value = va_arg(numbers, int);

		if (i == n - 1)
			separator = "";

		printf("%d%s", value, separator);
	}
	printf("\n");

	va_end(numbers);
}
