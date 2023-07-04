#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 *
 * @a: a pointer parameter(string input)
 *
 * @n: parameter for number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
