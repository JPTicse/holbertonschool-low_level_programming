#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n values of the array
 * @a: The array
 * @n: The n numbers of index
 */
void print_array(int *a, int n)
{
/*Print the values of the array*/
int i = 0;
	if (n == 1)
	{
		printf("%d\n", a[1]);
	}
	else
	{
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
	}
}
