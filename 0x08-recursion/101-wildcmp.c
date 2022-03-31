/**
 * wildcmp - compares 2 strings recursively
 * @s1: first string to compare
 * @s2: second string
 *
 * Return: 1 if strings identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 != *s2)
		return (0);
	return wildcmp(s1 + 1, s2 + 2);
}
