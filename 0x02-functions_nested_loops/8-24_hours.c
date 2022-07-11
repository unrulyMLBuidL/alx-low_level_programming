#include "main.h"

/**
 * jack_bauer - entry point
 *
 * description: prints every minute of the day.
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;

	for (; hours < 24; )
	{
	int minutes = 0;
		for (; minutes < 60; )
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			minutes++;
			_putchar('\n');
		}
	hours++;
	_putchar((hours / 10) + '0');
	_putchar((hours % 10) + '0');
	_putchar(':');
	_putchar('0');
	_putchar('0');
	}
	return;
}
