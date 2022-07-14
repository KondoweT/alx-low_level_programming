#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to count length
 * Return: the size of string
 */

int _strlen(char *s)
{
	int size;

	for (i = 0; *s[i] != '\0'; ++i)
		size = i;

	return (size);
}
