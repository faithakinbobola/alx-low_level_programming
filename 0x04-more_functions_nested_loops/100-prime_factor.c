#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 0; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
