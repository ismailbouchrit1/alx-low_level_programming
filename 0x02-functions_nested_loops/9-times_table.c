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
			p = n * m;
			if (m == 0)
			{
				_putchar(p + '0');
			}

			if (p < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			} else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
