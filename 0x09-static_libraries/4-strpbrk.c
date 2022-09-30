#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes.
* @s: string to be scanned
* @accept: string containing character to be matched
* Return: string s
**/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;

		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return (0);
}
