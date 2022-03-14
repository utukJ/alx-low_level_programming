#include <stdio.h>

/**
 * main - entry point prints all lower case alphabets in reverse order
 *
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
