#include <stdio.h>
#include <string.h>
/**
 * main - Prints up & low case aphabet letters
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
