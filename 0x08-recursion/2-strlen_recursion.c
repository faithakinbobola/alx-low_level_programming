#include "main.h"

/**
 *_strlen_recursion - a function that return string length
 *
 * @s: a string input
 *
 * Return: An integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
