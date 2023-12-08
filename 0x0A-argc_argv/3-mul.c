#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: the number of data
 * @argv: the passed data
 *
 * Description: print multiplication of two numbers
 *
 * Return: success 0
*/

int main(int argc __attribute__ ((unused)), char *argv[])
{
	int x1;
	int x2;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		printf("%d\n", x1 * x2);
	}
	return (0);
}
