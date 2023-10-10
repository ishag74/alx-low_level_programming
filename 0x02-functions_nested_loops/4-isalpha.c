#include "main.h"

/**
 * _isalpha - function.
 * Description: the function returns 1. Otherwise, the function returns 0.
 * @c: it takes value.
 *Return: Always 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
