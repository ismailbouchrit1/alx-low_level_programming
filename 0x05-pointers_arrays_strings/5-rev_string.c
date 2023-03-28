#include"main.h"

/**
 * rev_string - Reverse a string
 * @str: the string to reverse
 */

void rev_string(char *str)
{
	int i;
	int len = strlen(str);
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(str + i);
		*(str + i) = *(str + len - i - 1);
		*(str + len - i - 1) = tmp;
	}
}
