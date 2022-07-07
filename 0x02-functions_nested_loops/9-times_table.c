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
			_putchar(',');
			_putchar(' ');
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
