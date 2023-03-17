#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Use only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
