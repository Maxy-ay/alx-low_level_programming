#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print out combination of 2 numbers without repeatitions,
 * i.e 01, 02, 03, ...
 * note 01 and 10 are same
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{

			putchar(a + '0');
			putchar(b + '0');

			if ( a < 8)
			{

				putchar(',');
				putchar(' ');
			}	
		}
	}
	
	putchar('\n');

	return (0);
}
