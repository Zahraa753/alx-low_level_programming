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

	for (; s1[i] != '\0'; i++)
		;
	size1 = i;
	ptr = malloc(i);
		for (i = 0; s1[i] != 0; i++)
		{
			ptr[i] = s[i];
		}
	for (; s2[j] != 0; j++)
		;
	size2 = j;
	pon = realloc(ptr, j);
	for (j = 0; s2[j] '\0'; j++, i++)
	{i
		pon[j] = ptr[i];
	}
	return (pon);
}
