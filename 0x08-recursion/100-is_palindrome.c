#include "main.h"

/**
 * last_index - the length counter function
 * @s : the passed array
 * @begin : the start index
 * @finish : the last index
 * @mod : determine if the func is even or odd
 *
 * Return: the lengh
*/

int test(char *s, int begin, int finish, int mod);
int is_palindrome(char *s);
int last_index(char *s)
{
int h = 0;

if (*s > '\0')
{
	n += last_index(s + 1) + 1;
	return (n);
}
}

/**
 * is_palindrome - the main functionl used
 * @s: the passed array
 *
 * Return: recurtion to the func test
*/

int is_palindrome(char *s)
{
	int finish = last_index(s);

	return (test(s, 0, finish - 1, finish % 2));
}

/**
 * test - the comparing function
 * @s : the passed array
 * @begin : the start index
 * @finish : the last index
 * @mod : the determinng if it even or odd
 *
 * Return: many probabilities
*/

int test(char *s, int begin, int finish, int mod)
{
	if ((begin == finish && mod != 0) || (begin == end + 1 && mod == 1))
	return (1);
	else if (s[begin] != s[finish])
	return (0);
	else
	return (test(s, begin + 1, finish - 1, mod))
}
