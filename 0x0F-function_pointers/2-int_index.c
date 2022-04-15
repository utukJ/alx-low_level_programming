/**
 * int_index - searches for an integer in an array
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function used to compare values (1 for match)
 *
 * @Return: index of first element for which cmp does not return 0 or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return i;
	}

	return -1;
}
