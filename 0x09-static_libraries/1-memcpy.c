#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 *
 * @dest: a character input
 * @src: a character input
 * @n: an integer input
 *
 * Return: Always success (0)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}

	return (dest);
}
