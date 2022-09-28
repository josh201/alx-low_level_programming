#include "main.h"

/**
  * _power_recursion - returns the value of x raised to the power of y.
  * @x: integer input
  * @y: integer input
  * Return: the result of x raised to power y.t
  */

int _power_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x *= _pow_recursion(x, y - 1));
}
