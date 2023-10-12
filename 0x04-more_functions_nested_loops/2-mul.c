#include <stdio.h>
/**
 * mul - check the code
 * @a: variable.
 * @b: variable
 * Return: Always 0.
 */
int mul(int a, int b)
{
	int product = 0;
	
	for (int i = 0; i < b; i++)
	{
		product += a;
	}

	return (product);
}
