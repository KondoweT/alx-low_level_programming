#include <stdio.h>
#include <string.h>
/**
 * main - Prints all the letter of the aphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
