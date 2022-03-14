#include <stdio.h>

/**
 * main - entry point prints all lower case alphabets
 *
 * Return: 0 for success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (!(i == 0 && j == 1 && k == 2))
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
			}
		}
	}
	putchar('\n');
	return (0);
}
