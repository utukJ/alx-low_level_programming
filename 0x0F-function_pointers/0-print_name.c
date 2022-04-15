/**
 * print_name - prints a name by calling other function
 * @name: name to be printed
 * @f: function to be called
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
