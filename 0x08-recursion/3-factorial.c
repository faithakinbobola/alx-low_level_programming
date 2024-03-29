#include "main.h"

/**
* factorial - a  function that finds the factorial of n
*
* @n: an integer input
*
* Return: the factorial of n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
