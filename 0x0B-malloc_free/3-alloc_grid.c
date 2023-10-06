#include "main.h"

/**
 * alloc_grid - the main used functio
 * @width : the width
 * @height : the height
 *
 * Return: array value
*/

int **alloc_grid(int width, int height)
{

	int **pon, i, j;

	pon = malloc(sizeof(*pon) * height);
	if (width <= 0 || height <= 0 || pon == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			pon[i] = malloc(sizeof(**pon) * width);
			if (pon[i] == 0)
			{
				while (i--)
					free(pon[i]);
				free(pon);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				pon[i][j] = 0;
		}
	}
	return (pon);
}
