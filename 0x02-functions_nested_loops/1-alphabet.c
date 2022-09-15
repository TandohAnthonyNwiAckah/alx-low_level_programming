#include "main.h"

/**
* print_alphabet - print out alphabet in lowercase
* Return: 0 throw Success
*/

void print_alphabet(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;

	}

	_putchar('\n');
}
