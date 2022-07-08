#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: array of strings of argument argument counts
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
