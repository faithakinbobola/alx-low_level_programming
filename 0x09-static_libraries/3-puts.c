#include "main.h"

/**
* _puts - A function that prints a string
*
* @str: A pointer parameter
*
* Returns: nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(str[i]);

	_putchar('\n');
}
