#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		if (n == 57)
			putchar('\n');
	}
	return (0);
}
