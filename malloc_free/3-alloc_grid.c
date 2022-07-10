#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to tdarray or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **tdarray = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	tdarray = malloc(sizeof(int *) * height);
	if (!tdarray)
		return (NULL);

	while (i < height)
	{
		tdarray[i] = malloc(sizeof(int) * width);
		if (!tdarray[i])
		{
			for (j = i; j > 0; j--)
				free(tdarray[j]);

			free(tdarray);
			return (NULL);
		}
		i++;
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			tdarray[j][i] = 0;
	}

	return (tdarray);

}
