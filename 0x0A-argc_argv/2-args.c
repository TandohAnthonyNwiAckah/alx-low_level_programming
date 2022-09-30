#include <stdio.h>

/**
* main - print each argument passed to program on a line
* @argc: The size of the argv array
* @argv: An array of size argc
* Return: 0 throw success
*/

int main(int argc, char *argv[])

{

	int i = 0;

	while (i < argc)

		printf("%s\n", argv[i++]);

	return (0);

}
