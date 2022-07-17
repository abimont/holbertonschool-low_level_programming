#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int value, sum;
	unsigned int i;
	va_list parameters;

	if (n == 0)
		return (0);

	va_start(parameters, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		value = va_arg(parameters, int);
		sum += value;
	}

	va_end(parameters);
	return (sum);
}
