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
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(p));
return (0);
}
