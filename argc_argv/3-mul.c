#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: array of strings of argument argument counts
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);

	return (0);
}
