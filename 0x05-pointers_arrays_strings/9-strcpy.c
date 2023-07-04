#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: a string input
 *
 * @scr: a string input
 *
 * Return: a character string
 */

char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while(*src)
		*dest++ = *src++;
	return (copy);
}
