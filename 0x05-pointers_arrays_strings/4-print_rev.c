#include"main.h"

/**
 * print_rev - Print a string to STDOUT in reverse
 * @str: the string to print
 */

void print_rev(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(*(str + i));
	_putchar('\n');
}
