/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to first char of string
 *
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	int result;
	result = 0;

	while (1)
	{
		if (*s != '\0')
		{
			result += 1;
			s++;
		}
		else
			return (result);
	}
}
