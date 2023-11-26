#include "main.h"
int helpfunc(int n, int val);

/**
*is_prime_number- determine if number is prime or not
*@n: the passed number
*Description: get the prime number
*Return: 1 or 0
*/

int is_prime_number(int n)
{

	return (helpfunc(n, 2));
}

/**
*helpfunc- help me in proccess
*@n:the passed num
*@val:the compared num
*Description: help me to compare
*Return: 1 or 0
*/

int helpfunc(int n, int val)
{
	if (val >= n && n > 1)
	return (1);
	else if (n % val == 0 || n <= 1)
	return (0);
	else
	return (helpfunc(n, val + 1));

}
