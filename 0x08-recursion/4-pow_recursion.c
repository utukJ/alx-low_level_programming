/**
 * _pow_recursion - does exponentiation
 * @x: base
 * @y: power
 *
 * Return: x raised to power y (int)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
