#include"main.h"

/**
 * puts2 - prints every other character
 * of a string, starting with the first character
 * followed by a new line.
 *
 * @str: the string to print
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
