#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: pointer to int a
 *@b: pointer to int b
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
