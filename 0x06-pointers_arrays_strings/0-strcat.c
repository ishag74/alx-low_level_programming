#include "main.h"
#include <string.h>
/**
 * _strcat - check the code
 * @dest: var.
 * @src: var.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i = 0;

	dest += dest_len;
	
	for (; i < src_len; i++)
	{
		*dest++ = src[i];
	}

	*dest = '\0';
	return (dest);
}
