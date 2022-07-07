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
			if (prod < 10)
				_putchar(prod + '0');
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (prod != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
