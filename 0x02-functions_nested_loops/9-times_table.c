#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			_putchar(prod + '0');
			if (prod != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
