#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int j;

	char lett[] = "aAeEoOtTlL";
	char numb[] = "4433007711";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(str + i) == lett[j])
			{
				*(str + i) = numb[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
