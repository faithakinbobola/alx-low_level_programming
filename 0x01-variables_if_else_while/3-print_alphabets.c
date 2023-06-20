#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
 *
*/

int main(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
		putchar("%c ", i);

	for (i = 'a'; i <= 'z'; i++)
		putchar("%c ", i);

	return (0);
}
