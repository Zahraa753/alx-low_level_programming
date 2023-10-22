#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of named
 * @argv: the named
 *
 * Description: print the number of bassed values
 *
 * Return: success 0
*/

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
