#include <stdio.h>
#include <string.h>

/**
 * main - Prints all posssible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	/**
	 * nested for loop in another and setting the init value of the
	 * init value to the previous one of outer for loop will ensure
	 * the proper two two digit number combinations
	 */
	for (i = 0; j <= 99; j++)
	{
		for (i = j; i <= 99; i++)
		{
			/**
			 *  The if statement is used to prevent print out if i and
			 *  j are equal to avoid output like 00 00 and 11 11
			 */
			if (i != j)
			{
				/* Print the number */
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(44);
				putchar(i / 10 + 48);
				putchar(i / 10 + 48);

				/* Prints comma and whitespace between numbers */
				if (j * 100 + i != 9899)
				{
					putchar(32);
					putchar(44);
				}
			}
		}
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
