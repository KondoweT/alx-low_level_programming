#include "main.h"
/**
 * print_last_digit - Returns the last digit of number given
 * @num: The number to find last digit
 * Return: The last digit on num
 */


int print_last_digit(int num)
{
	int lastD num = % 10;

	if (lastD < 0)
		lastD *= -1;

	_putchar(lastD +'0');

	return (lastD);
}
