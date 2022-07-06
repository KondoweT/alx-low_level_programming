#include "main.h"

/**
 * print_sign - Prints sign of the number given
 * @n: number being checked if positive or negative
 *
 * Return: 1 if number is positive -1 if negative and 0 if Zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
