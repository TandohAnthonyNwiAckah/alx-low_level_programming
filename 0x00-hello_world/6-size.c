#include <stdio.h>
/**
** main - prints the size of types
** Return: 0 throw success
**/
int main(void)
{
int myInt;
long int myLongInt;
long long int myLInt;
char myChar;
float myFloat;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(myChar));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(myInt));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(myLongInt));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(myLInt));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(myFloat));
return (0);
}
