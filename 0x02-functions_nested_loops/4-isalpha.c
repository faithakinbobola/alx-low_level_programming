#include "main.h"

/**
 * _isalpha - A function that check for alphabetic
 * character is a letter both lowercase and uppercase
 *
 * @c: takes input from other functions
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) ||
		(c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
