#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
