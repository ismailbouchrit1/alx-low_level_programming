#include"main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int n, m;

	for (n = 0; n < 60; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m / 10 + '0');
			_putchar('\n');
		}
	}
}
