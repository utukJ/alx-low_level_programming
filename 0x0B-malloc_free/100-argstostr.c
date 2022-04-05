#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: arguments vector
 *
 * Return: pointer to new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, size;
	char *res;
	char **s;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
		size += strlen(av[i]) + 1;

	res = malloc(size + 1);
	if (res == NULL)
		return (NULL);

	i = 0;
	s = av;
	ptr = *s;
	while (i < size)
	{
		if (*ptr != 0)
		{
			res[i] = *ptr;
			ptr++;
		}
		else
		{
			res[i] = '\n';
			s++;
			ptr = *s;
		}
		i++;
	}

	res[size] = '\0';

	return (res);
}
