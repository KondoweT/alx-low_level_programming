#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if character is uppercase or not
 * @c: This is the character to be checked
 * Return: 1 if character is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;

	return (result);
}
