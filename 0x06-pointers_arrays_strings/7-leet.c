#include "main.h"

/**
 * leet - a fnction that encodes a string into 1337
 *
 * @str: an input character
 *
 * Return: A string of character
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char c = *ptr;

		if ((c == 'a' || c == 'A') || (c == 'e' || c == 'E') ||
		(c == 'o' || c == 'O') || (c == 't' || c == 'T') ||
		(c == 'l' || c == 'L'))
		{
			*ptr = '4' * (c == 'a' || c == 'A') +
				'3' * (c == 'e' || c == 'E') +
				'0' * (c == 'o' || c == 'O') +
				'7' * (c == 't' || c == 'T') +
				'1' * (c == 'l' || c == 'L');
		}

		ptr++;
	}

	return (str);
}
