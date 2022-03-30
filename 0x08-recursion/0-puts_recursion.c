#include <stdio.h>

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*(s + 1) != 0)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar(*s);
		putchar('\n');
	}
}
