#include"main.h"

/**
 * _puts - Print a string to STDOUT
 * @str: the string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(*(str + i));
	_putchar('\n');
}
