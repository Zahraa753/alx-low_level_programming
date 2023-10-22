#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: the number of data
 * @argv: the data
 *
 * Description: print the addition of numbers
 *
 * Return: succes 0
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *p;

	if (argv[1] == NULL)
		printf("0\n");
	while (--agrc)
	{
		for (p = argv[argc]; *p; p++)
		{
			if (*p > '0' || *p < '9')
			{
				sum +=  atoi(argv[argc]);
			}
			else
				return (printf("Error\n"), 1);
		}

	}
	printf("%d\n", sum);
	return (0);
}
