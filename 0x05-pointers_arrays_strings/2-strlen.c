#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to count length
 * Return: the size of string
 */

size_t _strlen(char *s)
{
	size_t size;

	size = 0;
	while (*s != '\0')
	{
		size++;
		*s++;
	}

	return (size);
}
