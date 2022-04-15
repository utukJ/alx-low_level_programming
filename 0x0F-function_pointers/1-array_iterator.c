#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of array
 * @action: pointer to function to be executed on each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
