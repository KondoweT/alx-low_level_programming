#include <stdio.h>

/**
 * main - Prints numbers for 0 to 9
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	/* Print the value of i */
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	/* Print new line when done */
	putchar('\n');

	return (0);
}
