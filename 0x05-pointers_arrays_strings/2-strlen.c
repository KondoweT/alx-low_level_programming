#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to count length
 * Return: the size of string
 */

int _strlen(char *s)
{
	int size;

	size = (sizeof(*s) / sizeof(*s[0]));

	return (size);
}
