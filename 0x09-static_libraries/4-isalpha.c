#include"main.h"

/**
 * _isalpha - check if a character  is lowercase or uppercase
 * @c: character to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
