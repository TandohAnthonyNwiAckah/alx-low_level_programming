#include "main.h"

/**
* main - prints _putchar
*
* Return: 0 throw Success
*/

int main(void)
{
	char ch[9] = "_putchar";

	int x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(ch[x]);
	}

	_putchar('\n');

	return (0);
}
