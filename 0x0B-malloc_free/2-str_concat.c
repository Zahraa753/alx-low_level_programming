#include "main.h"

/**
 * str_concat - main used function
 *
 * @s1: first text
 * @s2: second text
 *
 * Return: the tatal value
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;
	char *pon;
	int size1;
	int size2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[i] != '\0'; i++)
		;
	size1 = i;
	for (; s2[j] != '\0'; j++)
		;
	size2 = j;
	pon = malloc((size1 + size2) * sizeof(char) + 1);
	if (pon  == 0)
		return (0);
	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			pon[i] = s1[i];
		else
			pon[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (pon);
}
