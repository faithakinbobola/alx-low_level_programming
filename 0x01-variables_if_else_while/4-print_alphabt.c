#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
 *
*/

int main(void)
{
	char alphabet, q, e;

	q = 'q';
	e = 'e';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet != e && alphabet != q)
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
