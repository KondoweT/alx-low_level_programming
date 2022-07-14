#include "main.h"

/**
 * swap_int - exchanges the values stored in 2 integers
 * @a: first int whos value needs to be changed
 * @b: second int whos value needs to be changed
 */

void swap_int(int *a, int *b)
{
	int *temp;

	/* put value in address stored in a in temp */
	*temp = *a;
	*a = *b;
	*b = *temp;
}
