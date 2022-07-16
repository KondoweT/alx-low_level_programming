#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: the string to print
 */

void _puts(char *str)
{
	write(*str, '\n');
}
