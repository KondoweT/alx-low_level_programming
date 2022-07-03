#include <stdio.h>

/**
 * main - prints aphabet except q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	/* Prints small letters except q and e */
	for (i = 97; i < 123; i++)
	{
		if (!(i == 101 && i == 113))
		{
			putchar(i);
		}
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
