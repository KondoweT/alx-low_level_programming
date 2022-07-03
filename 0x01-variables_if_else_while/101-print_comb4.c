#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	/* nest for loop inside another for loop which is nested in for loop */
	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
			if (k > j && j > i)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
