#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Assigns a random number each time it is executed
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ld; 

ld = n % 10;
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, ld);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}