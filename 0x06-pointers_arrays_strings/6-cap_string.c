#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - check the code
 * @str: var.
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	int is_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			is_word = 0;
		}
		else if (is_word)
		{
			str[i] = toupper(str[i]);
			is_word = 0;
		}
	}
	return (str);
}
