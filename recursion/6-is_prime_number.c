#include "main.h"

int check_prime(int number, int div);

/**
 *is_prime_number - identify prime numbers
 *@n: input integer
 *
 *Return: 1 if input is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int div;

	div = 2;
	return (check_prime(div, n));
}

/**
 * check_prime - find prime numbers
 * @number: number to check if it's prime
 * @div: checker
 *
 * Return: return 1 if input is prime number, 0 otherwise
 */
int check_prime(int number, int div)
{
	if (div > 1)
	{
		if (number == div)
		{
			return (1);
		}
		else if (div % number == 0 || div <= 1)
		{
			return (0);
		}
		else
		{
			return (check_prime(number + 1, div));
		}
	}
	return (0);
}
