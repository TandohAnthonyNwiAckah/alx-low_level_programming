#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
* _sqrt - return the square root of a number
* @a: parameter a
* @b: parameter b
* Return: the square root of a
*/
int _sqrt(int a, int b)
{
	if (a > b / 2)
		return (-1);
	else if (a * a == b)
		return (a);
	return (_sqrt(a + 1, b));
}
