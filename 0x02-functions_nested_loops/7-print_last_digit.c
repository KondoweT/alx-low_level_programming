#include "main.h"
/**
 * print_last_digit - Returns the last digit of number given
 * @num: The number to find last digit
 * Return: The last digit on num
 */


int print_last_digit(int num)
{
	int lastD;

	if (num < 0)
		lastD = (num * -1) % 10;
	else if (num == 0)
		lastD = 0;
	else
		lastD = num % 10;

	return (lastD);
}
