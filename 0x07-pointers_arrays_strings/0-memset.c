#include "main.h"

/**
 * _memset - a function that fills memeory with a constant byte
 *
 * @s: a pointer input
 * @n: an integer input
 * @b: a character input
 *
 * Return: Always success (0)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
