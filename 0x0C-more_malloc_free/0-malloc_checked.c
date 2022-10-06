#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: size in bytes
* Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *fm;

	fm = malloc(b);

	if (fm == NULL)
		exit(98);
	return (fm);
}
