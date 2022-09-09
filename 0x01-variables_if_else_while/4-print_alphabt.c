#include <stdio.h>

/**
* main - prints the alphabet in lowercase,
* followed by a new line, except q and e
* Return: 0 throw Sucess
*/
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
