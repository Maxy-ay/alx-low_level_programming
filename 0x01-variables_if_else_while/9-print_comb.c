#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all combination of single numbers
 * i.e 0, 1, 2, ...,9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
	putchar(num + '0');
	if (num < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
