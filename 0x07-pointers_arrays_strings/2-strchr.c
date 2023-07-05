#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a character input
 * @c: a character input
 *
 * Return: returns null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
