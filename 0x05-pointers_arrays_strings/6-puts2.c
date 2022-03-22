#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints str to stdout in reverse followed by new line
 *
 * @str: string to be printed 
 *
 * Return: void
 */
void puts2(char *str)
{	
	int i;

	for (i = 0; i < strlen(str); i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
