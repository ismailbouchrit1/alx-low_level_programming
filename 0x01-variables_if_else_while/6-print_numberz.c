#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main -prints all single digit numbers of base 10 starting from 0
 * with putchar only
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
