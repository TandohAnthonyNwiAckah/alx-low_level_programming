#include <stdio.h>

/**
* main - print number of arguments passed to program
* @argc: The size of the argv array
* @argv:  An array of size argc
* Return: 0 throw success
*/

int main(int argc, char *argv[])
{

	(void) argv; /*Suppress the unused parameter warning */
	if (argc > 0)

		printf("%d\n", argc - 1);

	return (0);
}
