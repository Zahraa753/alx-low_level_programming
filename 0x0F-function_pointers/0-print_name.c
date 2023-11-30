#include <stdio.h>
#include "function_pointers.h"
/**
*print_name- the decide func
*@name: the passed num
*@f:pointer func
*Return: NOthing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
