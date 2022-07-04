#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	/* nest for loop inside another for loop */
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(44);
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57 &&
					l == 57))
					{
					putchar(32);
					putchar(44);
					}
				}
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
