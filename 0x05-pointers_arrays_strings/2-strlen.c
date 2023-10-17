#include "main.h"
/**
 * _strlen - check the code
 *@s: var.
 * Return: Always 0.
 */
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
