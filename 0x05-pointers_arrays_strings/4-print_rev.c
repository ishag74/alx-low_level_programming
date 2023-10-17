#include "main.h"
#include <stdio.h>
/**
 * _strlen - check the code
 *@s: var.
 * Return: Always 0.
 */
int _strlen(char *s);
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * print_rev - check the code
 *@s: var.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
	{
		putchar(s[len]);
	}

	putchar('\n');
}
