#include "main.h"

/**
*factorial- gives me the factorial of number
*@n: the used variable
*Description: this function print factorial
*Return: factorial n!
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	return (n * factorial(n - 1))
}
