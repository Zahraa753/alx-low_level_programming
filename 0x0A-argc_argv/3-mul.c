#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of data
 * @argv: the passed data
 *
 * Description: print multiplication of two numbers
 *
 * Return: success 0
*/

int main(int argc, char *argv[])
{
	if (!argv[1] && !argv[2])
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0)
}


