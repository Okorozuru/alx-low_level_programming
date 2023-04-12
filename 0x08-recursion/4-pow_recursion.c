#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates value of e raised to the power
 * @e: given number value
 * @g: exponent value
 * Return: value of e raised to the power of g
 */

int _pow_recursion(int e, int g)
{
	if (g < 0)
	{
		return (-1);
	}
	if (g == 0)
	{
		return (1);
	}
	return (e * _pow_recursion(e, g - 1));
}
