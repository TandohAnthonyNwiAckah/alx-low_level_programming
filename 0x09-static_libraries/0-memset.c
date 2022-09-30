#include "main.h"

/**
*_memset - fills memory with a constant byte.
* @s: paramter source string
* @b: parameter constant byte for filling
* @n: parameter  length of buffer
* Return: new string
*/

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int k = 0;

		while (k < n)
		{
			*(s + k) = b;
			k++;
		}
		return (s);
}
