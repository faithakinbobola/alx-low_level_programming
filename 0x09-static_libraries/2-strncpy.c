#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: a character input
 *
 * @src: a character input
 *
 * @n: an integer input
 *
 * Return: always return (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
