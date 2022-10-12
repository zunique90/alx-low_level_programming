#include "function_pointers.h"

/**
 * print_name - Prints a name
 *@name:name
 *@f:ponter to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
