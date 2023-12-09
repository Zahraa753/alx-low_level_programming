#include <stdio.h>
#include <stdlib.h>

/**
* main- Entry point used function to get you cents
* @argc: the number of arguments
* @argv: the passed pointer to argc
* Describtion: give the lettle number of cents
* Return: success (0) fail (1)
*/

int main(int argc, char *argv[])
{
	int i1, i2, i3, i4, i5, i6;
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	i1 = atoi(argv[1]) / 25;
	i2 = atoi(argv[1]) % 25;
	i3 = i2 / 10;
	i4 = (i2 % 10) / 5;
	i5 = ((i2 % 10) % 5) / 2;
	i6 = (((i2 % 10) % 5) % 2);

	if (atoi(argv[1]) < 1)
	printf("0\n");
	else
	printf("%d\n", i1 + i3 + i4 + i5 + i6);
	return (0);

}
