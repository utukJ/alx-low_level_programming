#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to array or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *arr, *ptr;

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return NULL;

	for(ptr = arr; ptr < arr + size; ptr++)
		*ptr = c;

	return arr;
}
