#include "main.h"
int helpfunc(int n, int val);

/**
*_sqrt_recursion- gives me the square root of number
*@n: the vairable 1
*Description: like sqr() function
*Return: Nothing
*/

int _sqrt_recursion(int n)
{
	return (helpfunc(n, 1));
}

/**
*helpfunc- help me to recursion
*@n: the passed value of num
*@val: the proccessed passed value
*Description: help me in proccess
*Return: Nothing
*/

int helpfunc(int n, int val)
{
	if (val * val == n)
	return (val);
	else if (val * val < n)
	return (helpfunc(n, val + 1));
	else
	return (-1);
}

