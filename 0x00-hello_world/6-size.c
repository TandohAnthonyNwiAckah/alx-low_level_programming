#include <stdio.h>
/**
** main - prints the size of types
** Return: 0 throw success
**/
int main(void)
{
int d;
long int g;
long long int t;
char r;
float p;
printf("Size of a char: %d byte(s)\n", sizeof(r));
printf("Size of an int: %d byte(s)\n", sizeof(d));
printf("Size of long int: %d byte(s)\n", sizeof(g));
printf("Size of long long int: %d byte(s)\n", sizeof(t));
printf("Size of float: %d byte(s)\n", sizeof(p));
return (0);
}
