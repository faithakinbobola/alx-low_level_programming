#include "main.h"

/**
 * string_toupper - a function that changes all lowercase to uppercase
 *
 * @str: pointer to input char
 *
 * Return: a set of character
 */


char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
