#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: This is the number passed to it
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	int result;

	if (c >= 0 && c <= 9)
		result = 1;
	else
		result = 0;

	return (result);
}
