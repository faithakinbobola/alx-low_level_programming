#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 *@a: A parameter
 *
 *@b: Another parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
