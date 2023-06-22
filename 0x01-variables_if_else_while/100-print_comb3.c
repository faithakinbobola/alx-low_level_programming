#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';

	while (a < '9')
	{
		int b = a + 1;

		while (b <= '9')
		{
			if (a != b)
			{

				putchar(a);
				putchar(b);

				if (b == '8' && a == '9')
					continue;

				putchar(',');
				putchar(' ');

			}
			++b;
		}
		++a;
	}

	putchar('\n');

	return (0);
}
