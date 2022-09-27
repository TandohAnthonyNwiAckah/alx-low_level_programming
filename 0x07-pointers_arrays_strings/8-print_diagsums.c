#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: parameter of array
* @size: parameter size of the array
* Return: void
*/
void print_diagsums(int *a, int size)
{

	int i;
	int total1, total2;

	total1 = 0;
	total2 = 0;

	i = 0;

	while (i < size)
	{
		total1 = total1 + *(a + i * size + i);
		total2 = total2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", total1, total2);
}
