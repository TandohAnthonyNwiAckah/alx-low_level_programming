#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse,
* Return: throw 0 Success
*/
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}

	putchar('\n');
	return (0);
}
