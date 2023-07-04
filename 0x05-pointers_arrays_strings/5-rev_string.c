#include "main.h"

/**
 * rev_string - a function that reverse a string
 * 
 * @s: an input string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char ans;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		ans = s[i];
		s[i++] = s[len];
		s[len] = ans;
	}
}
