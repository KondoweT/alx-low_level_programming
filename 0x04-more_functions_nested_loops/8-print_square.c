#include "main.h"

/**
 * print_square - prints a square the size of n
 * @size: the number of rows and columns
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
				_putchar('#');

			if (column == (size - 1))
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
