#include <stdio.h>
#include <string.h>

/**
 * _strcpy - prints second half of string followed by new line
 *
 * @dest: destination buffer
 * @src: string to be copied
 *
 * Return: buffer pointed to by dest(char *)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
