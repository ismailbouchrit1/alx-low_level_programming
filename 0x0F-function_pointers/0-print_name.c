#include"function_pointers.h"

/**
 * print_name -  prints a name.
 *
 * @name: the name to print
 *
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
