#include "main.h"

/**
 * _strstr - the used fuction
 * @haystack : the basic array
 * @needle : the compared array
 *
 * Return:
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack != '\0'; i++)
	{
		if ( needle[j] == haystack[i])
		{
			for ( j = 0; needle[j] != '\0'; j++, i++)
			{
				if (needle[i] == haystack[j])
					continue;
			}
				
		
		}
