#include <stio.h>
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

	if (argv[1] == NULL)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if ((atoi(argv)))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
