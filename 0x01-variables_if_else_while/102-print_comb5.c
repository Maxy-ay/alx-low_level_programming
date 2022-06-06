#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 2 digits of numbers from 00 to 99
 * i.e 00 01, 00 02, 00 03,..., 40 56, 40 57, 40 58,..., 99 99
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = a + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');

					if (a < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

