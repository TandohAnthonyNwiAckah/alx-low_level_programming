#include "main.h"

/**
* swap_int - Swap values of two integers
* @a: pointer to a
* @b: pointer to b
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;

	*a = *b;

	*b = swp;
}
