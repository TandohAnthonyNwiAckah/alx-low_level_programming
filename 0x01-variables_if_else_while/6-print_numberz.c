#include <stdio.h>

/**
* main - prints all single digit numbers of
* base 10 starting from 0,
* using putchar
* Return: 0  throw Success
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
