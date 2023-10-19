#include "main.h"

/**
 * print_number- check the code
 * @n: var.
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, is_neg;
	char digits[11];

	is_neg = n < 0;
	if (is_neg)
	{
		n = -n;
	}

	i = 0;
	while (n)
	{
		digits[i++] = n % 10 + '0';
		n /= 10;
	}

	if (is_neg)
	{
		digits[i++] = '-';
	}

	while (i--)
	{
		_putchar(digits[i]);
	}
}
