/**
 * _strncat - concatenates two strings (only at most n bytes of second string)
 *
 * @dest: destination string
 * @src: other string to be concatenated (at most n bytes)
 * @n: max number of bytes of src to concatenate
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		*(dest + i + j) = src[j];

	*(dest + i + j) = '\0';

	return (dest);
}
