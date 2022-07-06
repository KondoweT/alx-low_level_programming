#include "main.h"

/**
 * _islower - Checks fo lowercase character
 * @c: The character to check case
 * Return: 1 if character is lower and 0 if otherwise
 */

int _islower(int c)
{
	/* local variable declaration */
	int charN;

	if (c >= 97 && c <= 122)
	{
		charN = 1;
	}
	else
		charN = 0;

	return (charN);
}
