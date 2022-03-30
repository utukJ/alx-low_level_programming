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

// samuel ..... _print_rev_recursion("amuel") ===> leuma s
// amuel ...... _print_rev_recursion("muel") ====> leum a
// muel .... _print_rev_recursion("uel") ====> leu m
// uel .... _print_rev_recursion("el") =====> le u
// el ..... _print_rev_recursion("e") =====> e l
// e ...... _print_rev_recursion("") =====>  e
