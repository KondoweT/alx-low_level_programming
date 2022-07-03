#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits
 * Returns: Always 0 (success)
 */
int main(void)
{
	int i, j;

	/* Nest for loop in for loop to generate comparison numbers */
	for (i = 48; i < 57; i++)
	{
		for (j = 49; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			if ( i < 56 && j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
