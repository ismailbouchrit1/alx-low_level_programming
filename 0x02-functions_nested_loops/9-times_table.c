#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			_putchar(m * n + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
