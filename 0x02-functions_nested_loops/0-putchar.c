#include <stdio.h>

/* add header file for _putchar */
#include "main.h";

/**
 * main - Prints _putchar followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	char str;

	/* Store _putchar in string variable */
	str = "_putchar";

	/* call the _putchar() function in _putchar.c */
	_putchar(str);

	return (0);
}
