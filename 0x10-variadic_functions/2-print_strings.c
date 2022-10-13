#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: string to be printed between numbers
* @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			va_arg(ap, char *) = "nil";
		printf("%d", va_arg(ap, char *));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
