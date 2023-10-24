#include "main.h"
/**
 * *_memset - func
 * @s: var.
 * @b: var.
 * @n: vat.
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
