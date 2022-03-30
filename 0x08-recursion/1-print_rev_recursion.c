#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		;
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
