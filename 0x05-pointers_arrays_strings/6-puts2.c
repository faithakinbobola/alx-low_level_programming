#include "main.h"

/**
 *puts2 - function that prints every other character
 *
 * @str: A pointer parameter
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
