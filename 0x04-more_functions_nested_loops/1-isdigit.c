#include <stdio.h>
/**
 * _isdigit - func.
 * @c: variable
 * Description: desc.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
