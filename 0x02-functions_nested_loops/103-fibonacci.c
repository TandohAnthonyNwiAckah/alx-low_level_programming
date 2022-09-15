#include <stdio.h>
/**
* main - Prints sum of the even-valued terms
* Return: 0 throw Success
*/

int main(void)
{
	long int t1 = 1, t2 = 2, t3, even_sum = 0;

	while (t1 <= 4000000)
	{
		if (t1 % 2 == 0)
			even_sum += t1;
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
	}
	printf("%ld\n", even_sum);
	return (0);
}
