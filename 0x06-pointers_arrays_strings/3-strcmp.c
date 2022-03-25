/**
 * _strcmp - compares two strings
 *
 * @str1: first string to be compared
 * @str2: second string to be compared
 *
 * Return: (int) </> 0 for str1 </> 0 or =0 for str1 equal to str 2
 */
int _strcmp(char *str1, char *str2)
{
	char *p1 = str1;
	char *p2 = str2;

	while (*p1 && *p2 && *(p1++) == *(p2++))
		;

	return (*p1 - *p2);
}
