#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size; 
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
		return (str_concat("", s2));
	if (s2 == NULL)
		return (str_concat(s1, ""));

	size = strlen(s1) + strlen(s2) + 1;
	concat = malloc(size);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)	
		concat[i] = s1[i];

	for (j = 0; j < strlen(s2); j++)
		concat[i + j] = s2[j];

	concat[i+j] = '\0';
	return (concat);
}
