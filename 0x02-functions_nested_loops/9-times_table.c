#include"main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			p = m * n;
			if (p / 10 == 0)
				_putchar(p % 10  + '0');
			else
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
