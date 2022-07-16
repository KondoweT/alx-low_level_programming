#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string followed by a new line to stdout
 * @str: string to print to stdout
 */

void _puts(char *str)
{
	char nl;

	nl = '\n';
	write(STDOUT_FILENO, str, strlen(str));
	write(1, &nl, 1);
}
