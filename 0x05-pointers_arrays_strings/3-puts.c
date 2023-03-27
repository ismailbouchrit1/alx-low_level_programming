#include"main.h"

/**
 * _puts - Print a string to STDOUT
 * @str: the string to print
 */

void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
