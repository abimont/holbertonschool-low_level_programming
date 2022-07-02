#include "main.h"

/**
 *_sqrt_check - check for sq. root
 *@i: variable
 *@j: variable
 *Return: -1 or sq. root
 */

int _sqrt_check(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}

	if (i * i > j)
	{
		return (-1);
	}

	return (_sqrt_check(i + 1, j));
}


/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: variable
 *Return: -1 or sq. root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_check(1, n));
}

