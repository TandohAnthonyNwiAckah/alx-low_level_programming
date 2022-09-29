#include "main.h"

/**
* check_prime - check for prime numbers
* @f: input one
* @n: input two
* Description: check number
* Return: binary
*/

int check_prime(int f, int n)
{
	if (f == n)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	if (n % f == 0)
	{
		return (0);
	}
	return (check_prime(f + 1, n));
}

/**
* is_prime_number - int function
* @n: input
* Description check number
* Return: binary
*/

int is_prime_number(int n)
{
	return (check_prime(2, n));
}
