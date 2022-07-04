#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	/* nest for loop inside another for loop */
	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (!(i == 98 && j == 99))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
