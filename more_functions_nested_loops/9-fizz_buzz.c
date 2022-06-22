#include "main.h"
#include <stdio.h>

/**
 *main - FizzBuzz test
 *
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
		printf("%d", num);
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
