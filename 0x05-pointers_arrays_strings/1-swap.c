/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to int value to be swapped
 * @b: pointer to other int value to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
