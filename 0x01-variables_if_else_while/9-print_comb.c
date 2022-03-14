#include <stdio.h>

/**
 * main - entry point prints all lower case alphabets
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
