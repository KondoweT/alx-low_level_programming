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
		if (i < 57)
		{
			/* Print number, comma and a space */
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			/* Prints 9 */
			putchar(i)
	}

	return (0);
}
