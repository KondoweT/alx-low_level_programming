#include "main.h"

/**
 * _abs - Computes the absolute value
 * @n: number to compute absolut value
 * Return: Absolute value of number
 */

int _abs(int n)
{
	int pos;

	if (n >= 0)
		pos = n;
	else
	{
		pos = n * -1;
	}

	return (pos);
}
