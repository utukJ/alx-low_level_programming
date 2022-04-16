#include "function_pointers.h"

/**
 * array_iterator - Print the data of an array of integers
 * @array: Array of integers
 * @size: Unsigned long data type for the size of the array
 * @action: Function that performs the print, receives an integer value
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
