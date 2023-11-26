#include "main.h"

/**
*_pow_recursion- this is like the power func
*@x: the base
*@y: the power
*Description: power function
*Return: -1 or 1 or the base to the power
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	else if (y < 0)
	return (-1);
	return (x * _pow_recursion(x, y - 1));
}
