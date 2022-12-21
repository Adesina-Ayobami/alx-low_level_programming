#include "main.h"

/**
 *more_numbers -> printing more numbers
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			for (y >= 10)
				_putchar('1');
			_putchar(y + '0');
		}
	}

	_putchar('\n');
}
