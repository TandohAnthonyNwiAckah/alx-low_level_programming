#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int ran;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		ran = (rand() % 125) + 1;
		printf("%c", ran);
		total -= ran;
	}
	printf("%c", total);

	return (0);
}
