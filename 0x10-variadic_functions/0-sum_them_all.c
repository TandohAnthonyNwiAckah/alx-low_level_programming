#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
* @... : Extra paramters.
*  * Return: If n == 0  throw 0 or otherwise.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int count, sum = 0;

	va_start(nums, n);

	for (count = 0; count < n; count++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
