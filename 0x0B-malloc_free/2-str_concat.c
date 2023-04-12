#include"main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: NULL or pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int i, j;


	string = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < strlen(s1))
		{
			string[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (j < strlen(s2))
		{
			string[i] = s2[j];
			i++;
			j++;
		}
	}
	string[i] = '\0';

	return (string);

}
