#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_c(va_list txt);
void print_i(va_list txt);
void print_f(va_list txt);
void print_s(va_list txt);

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	type form[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s}
	};

	int i, j;
	char *separator = "";
	va_list txt;

	va_start(txt, format);
	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (form[j].arg == format[i])
			{
				printf("%s", separator);
				form[j].f(txt);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(txt);
}


/**
 * print_c - print a char
 * @txt: variable to print
 *
 * Return: void
 */
void print_c(va_list txt)
{
	printf("%c", va_arg(txt, int));
}

/**
 * print_i - print an integer
 * @txt: variable to print
 *
 * Return: void
 */
void print_i(va_list txt)
{
	printf("%i", va_arg(txt, int));
}

/**
 * print_f - print a float
 * @txt: variable to print
 *
 * Return: void
 */
void print_f(va_list txt)
{
	printf("%f", va_arg(txt, double));
}

/**
 * print_s - print a string
 * @txt: variable to print
 *
 * Return: void
 */
void print_s(va_list txt)
{
	char *str = va_arg(txt, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}

