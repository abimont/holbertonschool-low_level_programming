#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: char variable
 *Return: 0
 */

void print_to_98(int n)

{
	char es = ' ';
	char cm = ',';


	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			n--;
			if (n >= 98)
			{
				printf("%c%c", cm, es);
			}
		}
	}

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n <= 98)
			{
				printf("%c%c", cm, es);
			}
		}
	}

	printf("\n");
}
