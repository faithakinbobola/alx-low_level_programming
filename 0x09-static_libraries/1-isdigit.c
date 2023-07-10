#include "main.h"

/**
* _isdigit - A function that check for a digit
*
* @c: A digit input
*
* Return: Return 1 if c is a digit
*/

int _isdigit(int c)
{
	int result;

	if (c > 47 && c < 58)
		result = 1;
	else
		result = 0;

	return (result);
}
