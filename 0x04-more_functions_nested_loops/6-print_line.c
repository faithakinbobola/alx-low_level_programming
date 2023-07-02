#include "main.h"

/**
 * print_line - A function that draws a straight line in te terminal
 *
 *@n: An input parameter
 *
 * Return: n number of _
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
