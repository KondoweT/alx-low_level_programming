#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character checked if it is a letter in upper or lower case
 *
 * Return: 1 if letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	int num;

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		num = 1;
	else
		num = 0;

	return (num);
}
