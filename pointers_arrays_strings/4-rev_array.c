#include "main.h"
/**
 * reverse_array - Concatenate 2 stringsi
 * @a:  Pointer to Array.
 * @n: Number of elements.
 * Description: see variable
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	
	n -= 1;
	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

