#include "main.h"

/**
 * cap_string - a function that capitalzies all words of a string
 *
 * @str: input pointer
 *
 * Return: returns a string of characters
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (isspace(*ptr) || ispunct(*ptr))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);
}
