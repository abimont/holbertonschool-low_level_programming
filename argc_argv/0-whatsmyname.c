#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
