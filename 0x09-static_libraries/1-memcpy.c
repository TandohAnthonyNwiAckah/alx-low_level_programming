#include "main.h"

/**
* _memcpy - copy memory area
* @dest: parameter destination
* @src: parameter source
* @n: bytes of the memory
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	k = 0;

	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}

	return (dest);
}
