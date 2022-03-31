#include <string.h>

int is_palindrome_recursive(int *, int *);

/**
 * is_palindrome - checks if string is palindrome or not
 * @s: string to check
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end;

	end = s + strlen(s) - 1;

	return (is_palindrome_recursive(s, end));
}

/**
 * is_palindrome_recursive - recursive helper for is_palindrome
 * @s: pointer to start of string to check
 * @end: pointer to last character of string
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome_recursive(int *s, int *end)
{
	if (s >= end)
		return (1);
	if (*s != *end)
		return (0);
	return (is_palindrome_recursive(s+1, end-1));
}
