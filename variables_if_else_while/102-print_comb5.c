#include <stdio.h>

/**
 *main - print aall posible combinations bettween 2 two digits numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a1;
	int a2;
	int b1;
	int b2;

	for (a1 = '0'; a1 <= '9'; a1++) /*print first two digit combo*/
	{
		for (a2 = '0'; a2 <= '9'; a2++)
		{
			for (b1 = a1; b1 <= '9'; b1++) /*print second of pair*/
			{
				for (b2 = a2 + 1; b2 <= '9'; b2++)
				{
					putchar(a1);
					putchar(a2);
					putchar(' ');
					putchar(b1);
					putchar(b2);

					if (a1 != '9' || b1 != '8' || a2 != '9' || b2 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				b1 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
