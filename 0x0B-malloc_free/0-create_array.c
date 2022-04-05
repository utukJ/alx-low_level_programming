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
	char *arr;
	char *ptr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for(ptr = arr; ptr < arr + size; ptr++)
		*ptr = c;

	return (arr);
}
