#include "main.h"
/**
 * jack_bauer - check the code
 * Description: desc.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
