#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer
 * @array: Array of integers
 * @size: Number of elements
 * @cmp: Function used to compare integers
 *
 * Return: Index if found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
