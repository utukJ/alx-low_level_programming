#include <stdio.h>
#include <string.h>

/**
 * _puts - prints str to stdout in reverse followed by new line
 *
 * @str: string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;
	for (i = strlen(str); i >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
