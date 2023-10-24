#include "main.h"
#include <stdio.h>
/**
 * *_strchr - check the code
 * @s: var.
 * @c: var.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (*p == c)
		{
			return (p);
		}
	}

	return (NULL);
}
