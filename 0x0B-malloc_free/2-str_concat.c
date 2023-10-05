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

	for (; s1[i] != '\0'; i++)
		;
	if (s[i] == NULL)
		return (NULL);
	ptr = malloc(i + 1);
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
	for (; s2[j] != '\0'; j++)
		;
	if (s2[j] == NULL)
		return (NULL);
	pon = realloc(ptr, j + 1);
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		pon[i] = s2[j];
	}
	return (pon);
}
