/**
 * _strncpy - copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: max number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
	{
		for (; dest[i] != '\0'; i++)
			dest[i] = '\0';
	}

	return (dest);
}
