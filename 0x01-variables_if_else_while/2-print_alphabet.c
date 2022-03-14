#include <stdio.h>

/**
 * main - entry point prints all lower case alphabets
 *
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
