/**
 * string_toupper - changes all lowercase in string to uppercase
 * @s: input string
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *s)
{
	char *p;

	for (p = s; *p != 0; p++)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = 'A' + (*p - 'a');
	}
	return (s);
}
