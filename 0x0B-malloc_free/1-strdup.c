#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory which contains copy of input string
 * @str: string to be copied
 *
 * Return: pointer to allocated memory with copied string
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return NULL;

	size = strlen(str);
	ptr = malloc(size);

	if (ptr == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	
	return (ptr);
}
