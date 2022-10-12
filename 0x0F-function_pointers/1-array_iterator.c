#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array to iterate over
* @size: size of the array
* @action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
