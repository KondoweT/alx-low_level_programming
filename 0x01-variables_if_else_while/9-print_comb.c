#include <stdio.h>
#include <string.h>

/**
 * main - Prints possible combinations of digit
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		/* Print number with code in i */
		putchar(i);

		/* Add comma and space where needed */
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
