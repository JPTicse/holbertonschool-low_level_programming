#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function exec a function
 * @array: pointer to array
 * @size: number elements
 * @action: pointer to function
 * Return: nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
