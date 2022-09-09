#include <stdio.h>

/**
* main - print both lower and upper case
* Return: 0 throw Success
*/
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}

	putchar('\n');
	return (0);
}
