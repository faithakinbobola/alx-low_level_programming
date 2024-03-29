#include "main.h"

/**
 * _strcat - a fnction that concatenate two strings
 *
 * @dest: a string input
 *
 * @src: a string input
 *
 * Return: a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
