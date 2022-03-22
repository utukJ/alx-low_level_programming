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

	i = strlen(str) / 2;
	if strlen(str) % 2 != 0
		i++;

	for (i = 0; i < strlen(str); i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
