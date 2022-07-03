#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	i = 48;
	/* Use a for loop to compare values of i and j */
	for (j = 49; j <= 57; j++)
	{
		putchar(i);
		putchar(j);
		if (i < 56 && j < 57)
		{
			putchar(44);
			putchar(32);
		}

		i++;
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
