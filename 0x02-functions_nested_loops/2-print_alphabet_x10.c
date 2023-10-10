#include "main.h"

/**
 * print_alphabet - intialize.
 * Description: intial.
 * Return: Always 0.
 */

void print_alphabet(void);
/**
 * print_alphabet_x10 - func.
 * Description: short.
 * Return: always ero.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

/**
 * print_alphabet - function.
 * Description: short description.
 * Rreturn: zero
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

