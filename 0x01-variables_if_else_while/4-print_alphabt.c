#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
