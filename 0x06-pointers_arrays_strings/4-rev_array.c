#include "main.h"

/**
* reverse_array -  function that reverses the content of an array of integers.
* @a: parameter a
* @n: parameter n.
*/

void reverse_array(int *a, int n)
{
	int i;
	int k;

	i = 0;

	while (i < n)
	{
		n--;
		k = a[i];
		a[i] = a[n];
		a[n] = k;
		i++;
	}
}
