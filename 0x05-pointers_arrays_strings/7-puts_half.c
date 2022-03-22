#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints second half of string followed by new line
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int str_size;

	str_size = strlen(str);
	i = str_size / 2;
	if (str_size % 2 != 0)
		i++;

	for (; i < str_size; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
