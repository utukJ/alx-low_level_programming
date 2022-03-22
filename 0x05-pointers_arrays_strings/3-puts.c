#include <stdio.h>

/**
 * _puts - prints str to stdout
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char *s;

	s = str;

	while (s != '\0') 
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
