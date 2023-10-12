#include <stdio.h>
/**
 * _isupper - func.
 * @c: init.
 * Description: desc.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
