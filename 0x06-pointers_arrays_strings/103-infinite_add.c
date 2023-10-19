#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - check the code
 * @n1: var.
 * @n2: var.
 * @r: var.
 * @size_r.
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry, len1, len2;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (size_r < len1 + len2 + 1) {
		return (0);
	}

	i = len1 - 1;
	j = len2 - 1;
	carry = 0;
	r[len1 + len2] = '\0';

	while (i >= 0 || j >= 0)
	{
		int sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
		carry = sum / 10;
		r[len1 + len2 - 1 - i - j] = sum % 10 + '0';
		i--;
		j--;
	}

	if (carry)
	{
		r[len1 + len2 - 1] = carry + '0';
		return (r);
	}
	else
	{
		return (r + len1 + len2 - 1);
	}
}
