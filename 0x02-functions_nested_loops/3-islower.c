#include "main.h"

/**
 * _islower - A function name that checks for lower character
 *
 * function that checks for lowercase character
 *
 * c: parmneter
 *
 * Return: 1 if true, 0 if false
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
