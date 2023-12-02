#include "function_pointers.h"

/**
*array_iterator- the used function
*@array: the passed array
*@size: the passed size of array
*@action: the pointer to array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(*(array++));
	}
}
