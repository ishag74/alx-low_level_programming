#include "main.h"
#include <stdio.h>
/**
 * puts2 - check the code
 * @str: var.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
