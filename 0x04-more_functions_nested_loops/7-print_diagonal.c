#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: This is the number of \ used to draw the diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != 0)
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
