#include <stdio.h>
#include <string.h>

/**
 * main - Print 0 - 9 using putchar()
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	/* Print the numbers */
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
