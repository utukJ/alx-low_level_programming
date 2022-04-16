#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Print the index of an array
 * @array: Array of integers given
 * @size: Size of the array
 * @cmp: Function to compare the data in the array
 *
 * Return: Int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <=  0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}

	return (-1);
}
