#include"main.h"

/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: n first bytes of s2
 *
 * Return: NULL or pointer to new allocated space of memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j, len1 = 0, len2 = 0, size;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	len1++;
	len2++;
	if (len2 > n)
		len2 = n;
	size = len1 + len2 + 1;
	string = malloc(size);
	if (string == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			string[i] = s1[i];
	}
	if (s2)
	{
		for (j = 0; j < n; j++)
		{
			string[i] = s2[j];
			i++;
		}
	}
	return (string);
}
