#include "main.h"
#include <stdio.h>

/**
 * *_strstr - check the code
 * @haystack: var
 * @needle: var.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	p = haystack;
	q = needle;

	while (*p != '\0')
	{
		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}

		if (*q == '\0')
		{
			return (p);
		}

		p++;
		q = needle;
	}

	return (NULL);
}
