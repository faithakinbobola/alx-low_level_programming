#include "main.h"

/**
 * _sqrt_recursion_helper - a helper function
 *
 * @start: an integer input
 * @end: an integer input
 *
 * Return: an integer
 */

int _sqrt_recursion_helper(int start, int end)
{
	if (start > end)
	{
		return (-1);
	}
	else if (start * start == end)
		return (start);
	return (_sqrt_recursion_helper(start + 1, end));
}

/**
 * _sqrt_recursion - a function thet returns the natural square root
 * @n: an input integer
 * Return: an integer value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(1, n));
}
