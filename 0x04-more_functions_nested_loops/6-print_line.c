#include "main.h"

/**
 * print_line - Prints line using _ character and _putchar()
 * @n: This is the number of _ used to make the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
