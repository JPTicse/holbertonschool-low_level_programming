#include "main.h"

/**
 * swap_int - swap values
 * @a: Pointer a
 * @b: Pointer b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
