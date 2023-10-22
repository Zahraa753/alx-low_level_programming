#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of data
 * @argv: the values of data
 *
 * Description: print all passed data
 *
 * Return: success 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}
	return (0);
}
