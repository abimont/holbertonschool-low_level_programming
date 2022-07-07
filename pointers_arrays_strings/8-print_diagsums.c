#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sm = 0;
	int sm2 = 0;

	for (i = 0; i < (size * size);)
	{
		sm = sm + a[i];
		i = i + size + 1;
	}

	for (i = 0; i < (size * size) - size;)
	{
		i = i + size - 1;
		sm2 = sm2 + a[i];
	}

	printf("%d, %d\n", sm, sm2);
}
