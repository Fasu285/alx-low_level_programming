#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value of raise
 * @y: The power for x
 *
 * Returns: return the result x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
