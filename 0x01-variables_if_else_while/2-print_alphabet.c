#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 throw Success
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
