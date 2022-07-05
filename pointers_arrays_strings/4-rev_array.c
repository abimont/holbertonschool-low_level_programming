#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer
 * @n: variable
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j, bkup;

	for (i = 0; i < n - 1; i++)
	{

		for (j = i + 1; j > 0; j--)
		{
			bkup = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = bkup;
		}
	}
}
