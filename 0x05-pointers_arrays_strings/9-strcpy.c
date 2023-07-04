#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: a string input
 *
 * @src: a string input
 *
 * Return: a character string
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[i] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
