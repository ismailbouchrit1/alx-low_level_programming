#include"main.h"

/**
 * _puts - prints half of a string,
 * followed by a new line.
 * 
 * @str: the string to print
 */

void puts_half(char *str)
{
	int i, n;
	int len = strlen(str);

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len; i++)
                        _putchar(*(str + i));

	_putchar('\n');
}
