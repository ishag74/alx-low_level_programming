#include "main.h"
/**
 * _puts - check the code
 *@str: var
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
