#include "main.h"

/**
 * more_numbers - A function that prints 10 times
 *
 * Returns: 0 t0 14, 10 times
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
