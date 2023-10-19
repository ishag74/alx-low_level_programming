#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - check the code
 * @*dest: var.
 * @src: var.
 * @n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);

	if (n > src_len)
	{
		n = src_len;
	}

	dest += dest_len;

	while (n--)
	{
    *dest++ = *src++;
	}

	*dest = '\0';
	return (dest);
}
