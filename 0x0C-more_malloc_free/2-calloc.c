#include "main.h"

/**
* _calloc -allocated memory for an array
* @nmemb: number of element in the array
* @size: bytes for each position in array
* Return: pointer void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *fm;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	fm = malloc(nmemb * size);

	if (fm == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		fm[i] = 0;

	return (fm);
}
