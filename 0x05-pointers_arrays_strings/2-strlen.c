#include "main.h"

/**
 * _strlen - A function that return the length of a string
 *
 *@s: A poniter variable
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
