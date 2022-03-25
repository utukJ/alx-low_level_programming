int should_cap(char *);

/**
 * cap_string - changes all lowercase in string to uppercase
 * @s: input string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *s)
{
	char *p;

	if (*s >= 'a' && *s <= 'z')
		*s = 'A' + (*s - 'a');

	for (p = s + 1; *p != 0; p++)
	{
		if (*p >= 'a' && *p <= 'z' && should_cap(p))
			*p = 'A' + (*p - 'a');
	}
	return (s);
}


/**
 * should_cap - checks if letter should be capitalized based on prev char
 * @ptr: pointer to character
 *
 * Return: int 1 or 0 for true or false
 */
int should_cap(char *ptr)
{
	char *separators;
	int i;

	separators = " \t\n,;.!?\"(){}";
	
	for (i = 0; separators[i] != 0; i++)
	{
		if (separators[i] == *(ptr - 1))
			return (1);
	}

	return (0);
}
