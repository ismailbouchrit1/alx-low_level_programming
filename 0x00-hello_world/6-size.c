#include<stdio.h>

/**
 * main - prints the size of various types on the computer
 * Description: prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\nSize of n int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
return (0);
}
