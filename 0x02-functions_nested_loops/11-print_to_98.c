#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
