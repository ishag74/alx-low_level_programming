#include "main.h"
/**
 * print_last_digit - check the code
 * Description: desc.
 * @n: initial.
 * Return: Always last_digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
