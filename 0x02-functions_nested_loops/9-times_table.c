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
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;
			if (prod < 10)
				_putchar(' ');
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
