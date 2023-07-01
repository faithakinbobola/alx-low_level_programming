#include "main.h"

/**
 * _isupper - function that checks for uppercase characcter
 *
 *@c: an input character
 *
 *Return: Returns 1 if c is uppercase
 *		retuns 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if (c > 64 && c < 91)
		result = 1;
	else
		result = 0;

	return (result);
}
