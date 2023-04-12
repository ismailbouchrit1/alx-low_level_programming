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
	unsigned int len, i, j;

	len = strlen(s1) + strlen(s2) + 1;
	string = (char *) malloc(len * sizeof(char));
	if (string == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';

	return (string);

}
