#include "function_pointers.h"

/**
* print_name - prints a name
* @name: string
* @f: pointer to the print function
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}
