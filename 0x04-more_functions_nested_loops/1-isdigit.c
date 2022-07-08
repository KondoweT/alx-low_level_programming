#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: This is the number passed to it
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	int result, d;

	d = (int)c;
	if (d >= 0 && d <= 9)
		result = 1;
	else if (d >= 65 && d <= 90)
		result = 1;
	else
		result = 0;

	return (result);
}
