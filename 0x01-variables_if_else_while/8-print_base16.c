#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
*/

int main(void)
{
	int i;
	char alp;

	for (i = 0; i < 10; i++)
		putchar(i);

	for (alp = 'a'; alp < 'g'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
