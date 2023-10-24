#include "main.h"
#include <stdio.h>
/**
 * _strspn - check the code
 * @s: var.
 * @accept: var.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
