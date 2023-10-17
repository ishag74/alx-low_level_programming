#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * @str: var.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;
	int i = half;

	for (; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
