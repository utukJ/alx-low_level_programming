/**
 * _strcmp - compares two strings
 *
 * @str1: first string to be compared
 * @str2: second string to be compared
 *
 * Return: (int) </> 0 for str1 </> 0 or =0 for str1 equal to str 2
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] > str2[i])
			return (1);

		if (str1[i] < str2[i])
			return (-1);
	}

	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);

	if (str1[i] == '\0')
		return (-1);

	return (1);
}
