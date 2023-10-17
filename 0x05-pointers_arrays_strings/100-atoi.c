#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - check the code
 * @s: var.
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int n = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}

	return (n * sign);
}
