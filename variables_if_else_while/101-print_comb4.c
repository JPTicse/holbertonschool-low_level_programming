#include <stdio.h>

/**
 *main - print all combinations of three numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	int b;
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = (a + 1); b <= '9'; b++)
		{
			for (c = (b + 1); c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
