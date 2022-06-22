#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long sumhalf1, sumhalf2;

	int i = 0;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (i = 92; i < 98; i++)
	{
		sumhalf1 = fib1_half1 + fib2_half1;
		sumhalf2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			sumhalf1 += 1;
			sumhalf2 %= 10000000000;
		}

		printf("%lu%lu", sumhalf1, sumhalf2);
		if (i != 97)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = sumhalf1;
		fib2_half2 = sumhalf2;
	}
	printf("\n");
	return (0);
}
