#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: parameter to print
* Return: void
*/

void print_chessboard(char (*a)[8])
{

	int k, j;

	k = 0;

	while (k < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar (a[k][j]);
			j++;
		}

		_putchar ('\n');

		k++;
	}
}
