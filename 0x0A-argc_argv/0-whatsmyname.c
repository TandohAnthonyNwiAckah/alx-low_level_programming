#include <stdio.h>

/**
* main - Print the name of the program
* @argc: The size of the argv array
* @argv: An array of size argc
* Return: 0 throw success
*/

int main(int argc, char *argv[])
{
(void) argc; /* Suppress the unused parameter warning.*/
printf("%s\n", argv[0]);

return (0);
}
