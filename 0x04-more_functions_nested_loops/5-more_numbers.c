#include "main.h"

/**
 * print 0 - 14, 10 times.
 */

void more_numbers(void)

{

	char y, x;

	int i = 0;



	while (i < 10)

	{

		for (y = 0; y <= 14; y++)

		{

			x = y;

			if (y > 9)

			{

				_putchar('1');

				x = y % 10;

			}

			_putchar('0' + x);

		}



		_putchar('\n');

		i++;

	}

}
