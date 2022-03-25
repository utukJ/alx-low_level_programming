/**
 * reverse_array - reverses content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
