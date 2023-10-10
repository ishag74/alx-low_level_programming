#include "main.h"

/**
 * print_to_98 - check the code
 * @n: init.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i=n; i <= 98;)
	{
		printf("%d, ", i++);
	}
	printf("\n");
}
