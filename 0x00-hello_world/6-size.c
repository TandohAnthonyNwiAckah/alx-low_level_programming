#include <stdio.h>
/**
** main - prints the size of types
** Return: 0 throw success
**/
int main(void)
{
printf(“The size of a char is : %d  byte(s)\n", sizeof(char));
printf(“The size of an int is : %d  byte(s)\n", sizeof(int));
printf(“The size of a long int is :  %d  byte(s)\n", sizeof(long int));
printf(“size of a long long int :  %d  byte(s)\n", sizeof(long long int));
printf(“The size of a float is:  %d  byte(s)\n", sizeof(float));
return (0);
}
