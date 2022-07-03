#include <stdio.h>
#include <string.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	/* Print 0 to 9 */
	for (num = 47; num <= 57; num++)
		putchar(num);

	/* Print a to f */
	for (num = 97; num <= 102; num++)
		putchar(num);

	/* Print new line */
	putchar('\n');

	return (0);
}
