#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number from whith start the print
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 10)
		{
			_putchar(i + '0');
		} else
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
}
