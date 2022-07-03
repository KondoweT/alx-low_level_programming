#include <stdio.h>
#include <string.h>

/**
 * main - Prints small leter of alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Prints char with ASCII code in i */
	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	/* Prints new line */
	putchar('\n');

	return (0);
}
