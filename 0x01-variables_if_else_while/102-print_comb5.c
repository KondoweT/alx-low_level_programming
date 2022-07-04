#include <stdio.h>
#include <string.h>

/**
 * main - Prints all posssible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	/* nest 4 levels of for statements */
	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b < 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (!(a == 48 && b == 48 && c == 48 && d == 48))
					{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a != 56 || b != 57)
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
