#include "main.h"

/**
 * more_numbers - prints 10 times 0 through to 14
 */

void more_numbers(void)
{
	int h, i;

	for (h = 0; h < 10; h++)
	{
	for (i = 0; i <= 14; i++)
	{
		_putchar((i / 10) + '0');
		if (i > 9)
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
